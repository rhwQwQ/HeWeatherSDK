Pod::Spec.new do |s|
s.name             = "HeWeatherSDK"    #名称
s.version          = "1.7.1"             #版本号
s.summary          = "和风天气SDK"     #简短介绍，下面是详细介绍
s.description      = <<-DESC
                     Testing Private Podspec.
                     * Markdown format.
                    * Don't worry about the indent, we strip it!
                    DESC
s.homepage         = "https://github.com/rhwQwQ/HeWeatherSDK.git"                               #主页,这里要填写可以访问到的地址，不然验证不通过
s.license          = 'MIT'              #开源协议
s.author           = { "rhw" => "920731000@qq.com" }                   #作者信息
s.source           = { :git => "https://github.com/rhwQwQ/HeWeatherSDK.git", :tag => "1.7.1" }      #项目地址，这里不支持ssh的地址，验证不通过，只支持HTTP和HTTPS，最好使用HTTPS
s.platform     = :ios, '8.0'            #支持的平台及版本
s.requires_arc = true                   #是否使用ARC，如果指定具体文件，则具体的问题使用ARC
s.vendored_frameworks ='HeWeather.framework'
s.frameworks = 'UIKit'                  #所需的framework，多个用逗号隔开
s.dependency 'AFNetworking'   #依赖关系，该项目所依赖的其他库，如果有多个需要填写多个
s.dependency 'YYModel'
end
