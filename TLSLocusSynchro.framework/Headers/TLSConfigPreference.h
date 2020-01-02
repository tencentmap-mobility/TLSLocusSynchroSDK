//
//  TLSConfigPreference.h
//  TLSLocusSynchroDubugging
//
//  Created by 薛程 on 2018/11/5.
//  Copyright © 2018年 tencent. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN
/**
 * @brief  同步机的配置信息基类. 
 */
@interface TLSConfigPreference : NSObject

/**
 * @brief  key信息.
 */
@property (nonatomic, copy) NSString *key;

/**
 * @brief  账户ID.
 */
@property (nonatomic, copy) NSString *accountID;

/**
 * @brief identifier 设备标识，默认取自idfv。排查问题时需提供此identifier。注意，卸载重装时identifier可能发生变化。
 * 如果希望使用自己业务上的设备标识来排查问题，可以将identifier修改为自己业务上的设备标识。
 */
@property (nonatomic, copy) NSString *identifier;

@end

/**
 * @brief  同步机的乘客端配置信息.
 */
@interface TLSPassengerConfigPreference : TLSConfigPreference


@end

/**
 * @brief  同步机的司机端配置信息.
 */
@interface TLSDriverConfigPreference : TLSConfigPreference


@end

NS_ASSUME_NONNULL_END
