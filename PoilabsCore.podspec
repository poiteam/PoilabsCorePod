Pod::Spec.new do |s|

# 1
s.platform = :ios
s.ios.deployment_target = '11.0'
s.name = "PoilabsCore"
s.summary = "PoilabsCore"
#s.requires_arc = true

#2
s.version = "1.0.12"

# 3
s.license = { :type => "Proprietary", :file => "LICENSE" }

# 4 - Replace with your name and e-mail address
s.author = { "Emre Kuru" => "emre@poilabs.com" }

# 5 - Replace this URL with your own GitHub page's URL (from the address bar)
s.homepage = "https://github.com/poiteam/PoilabsCorePod"

# 6 - Replace this URL with your own Git URL from "Quick Setup"
s.source = { :git => "https://github.com/poiteam/PoilabsCorePod.git",
             :tag => "#{s.version}" }

s.pod_target_xcconfig = {
    'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64'
  }
  s.user_target_xcconfig = { 'EXCLUDED_ARCHS[sdk=iphonesimulator*]' => 'arm64' }

s.ios.vendored_frameworks = 'PoilabsCore.xcframework'
end
