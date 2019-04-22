Pod::Spec.new do |s|
s.name             = "HeWeatherSDK"    
s.version          = "1.8"             
s.summary          = "和风天气SDK"     
s.description      = <<-DESC
                     Testing Private Podspec.
                     * Markdown format.
                    * Don't worry about the indent, we strip it!
                    DESC
s.homepage         = "https://github.com/rhwQwQ/HeWeatherSDK.git"                               
s.license          = 'MIT'           
s.author           = { "rhw" => "920731000@qq.com" }                  
s.source           = { :git => "https://github.com/rhwQwQ/HeWeatherSDK.git", :tag => "1.8" }     
s.platform     = :ios, '8.0'            
s.requires_arc = true                  
s.vendored_frameworks ='HeWeather.framework'
s.frameworks = 'UIKit'                  
s.dependency 'AFNetworking'   
end
