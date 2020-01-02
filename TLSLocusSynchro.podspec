Pod::Spec.new do |spec|

  spec.name         = "TLSLocusSynchro"
  spec.version      = "1.0.6"
  spec.summary      = "This is TLSLocusSynchro SDK."
  spec.homepage     = "https://lbs.qq.com"
  spec.license      = {:type => "CopyRight", :text => "Copyright © 1998-2019 Tencent All Rights Reserved"}
  spec.author       = { "mol" => "mikedpzhang@tencent.com" }
  spec.platform     = :ios, "9.0"
  spec.source       = { :git => "https://github.com/tentcentmap-mobility/TLSLocusSynchro.git", :tag => "#{spec.version}" }
  spec.requires_arc = true

  spec.source_files  = "TLSLocusSynchro.framework/Headers/*.h"
  spec.public_header_files = "TLSLocusSynchro.framework/Headers/*.h"
  spec.ios.vendored_frameworks = "TLSLocusSynchro.framework"

  spec.frameworks  = "CoreLocation"
end
