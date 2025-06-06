Pod::Spec.new do |s|

# 1
s.platform = :ios
s.ios.deployment_target = '12.0'
s.name = "PoilabsCore"
s.summary = "PoilabsCore"

#2
s.version = "1.0.15"

# 3
s.license = { :type => "Proprietary", :file => "LICENSE" }

# 4 - Replace with your name and e-mail address
s.author = { "Emre Kuru" => "emre@poilabs.com" }

# 5 - Replace this URL with your own GitHub page's URL (from the address bar)
s.homepage = "https://github.com/poiteam/PoilabsCorePod"

# 6 - Replace this URL with your own Git URL from "Quick Setup"
s.source = { :git => "https://github.com/poiteam/PoilabsCorePod.git",
             :tag => "#{s.version}" }

s.ios.vendored_frameworks = 'PoilabsCore.xcframework'
end
