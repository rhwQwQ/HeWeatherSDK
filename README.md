
# 和风 iOS HEWEATHER.framework 使用文档

1.工程配置
2.接口和数据类对照
3.数据类属性对照
4.数据访问代码

## 1.工程配置
### 1.1 手动配置
* 本 framework 采用 Objective-C 编译，将 framework 包导入到项目中即可

* 如果工程是由swift编写：

（1）在Swift工程主目录下新建一个OC类，如果是项目第一次创建OC类的话，会弹出如图的提示窗。这个提示窗就是是否建立Swift-OC的桥接文件的弹窗提示。

（2）点击Create Bridging Header，Xcode会自动创建一个头文件。这个头文件，就是Swift-OC的桥接文件

（3）在Swift-OC桥接文件里将本framework类进行声明,即可以使用。

（4）sdk需要开启定位权限，请在工程plist.info文件中添加NSLocationAlwaysAndWhenInUseUsageDescription和NSLocationWhenInUseUsageDescription

### 1.2 自动配置
* pod update

* podfile添加pod 'HeWeatherSDK'

* pod install

### 1.3 引用库
> AFNetworking 

### 1.4 注意事项
* 若产生崩溃unrecognized selector sent to ...，请在Build Settings中的Other Linker Flags里加上-ObjC

## 2.接口和数据类对照

接口说明 | 接口类型（枚举） | 数据类
--------- | ------------- | -----------
3-10天天气预报 | INQUIRE_TYPE_WEATHER_FORECAST | WeatherForecastBaseClass.h
实况天气 | INQUIRE_TYPE_WEATHER_NOW | WeatherNowBaseClass.h
逐小时预报 | INQUIRE_TYPE_WEATHER_HOURLY | WeatherHourlyBaseClass.h
生活指数 | INQUIRE_TYPE_WEATHER_LIFESTYLE | WeatherLifestyleBaseClass.h
常规天气数据集合 | INQUIRE_TYPE_WEATHER | WeatherBaseClass.h
格点实况天气 | INQUIRE_TYPE_WEATHER_GRID_NOW | WeatherGridNowBaseClass.h
格点7天预报 | INQUIRE_TYPE_WEATHER_GRID_FORECAST | WeatherGridForecastBaseClass.h
格点逐小时预报 | INQUIRE_TYPE_WEATHER_GRID_HOURLY | WeatherGridHourlyBaseClass.h
分钟级降雨（邻近预报） | INQUIRE_TYPE_WEATHER_GRID_MINUTE | WeatherGridMinuteBaseClass.h
天气灾害预警 | INQUIRE_TYPE_ALARM | AlarmBaseClass.h
天气灾害预警集合 | INQUIRE_TYPE_ALARM_ALL | AlarmAllBaseClass.h
景点天气预报 | INQUIRE_TYPE_SCENIC | ScenicBaseClass.h
空气质量实况 | INQUIRE_TYPE_AIR_NOW | AirNowBaseClass.h
空气质量7天预报 | INQUIRE_TYPE_AIR_FORECAST | AirForecastBaseClass.h
空气质量逐小时预报 | INQUIRE_TYPE_AIR_HOURLY | AirHourlyBaseClass.h
空气质量数据集合 | INQUIRE_TYPE_AIR | AirBaseClass.h
卫星云图 | INQUIRE_TYPE_MAP_CLOUD_MAP | UIImage type
太阳高度 | INQUIRE_TYPE_SOLAR_ELEVATION_ANGLR | SolarElevationAngleBaseClass.h
日出日落 | INQUIRE_TYPE_SOLAR_SUNRISE_SUNSET | SolarSunriseSunsetBaseClass.h
历史数据 | INQUIRE_TYPE_WEATHER_HISTORICAL | WeatherHistoricalBaseClass.h
城市查询 | INQUIRE_TYPE_SEARCH | SearchBaseClass.h

## 3.数据类属性对照
* 详见同目录《和风 iOS HEWEATHER.framework 实体类属性对照》

## 4.数据访问代码

### 4.1 framework 不提供日志功能， 错误信息可由以下回调函数getError中获得
 
 ```
- (void)weatherWithInquireType:(INQUIRE_TYPE)inquireType
                   WithSuccess:(void(^)(id responseObject))getSuccess
              faileureForError:(void(^)(NSError *error))getError;
  
 ```            

              
### 4.2 使用 framework 时，调用单例方法 sharedInstance 即可（或自行使用 init 方法）

```
 +(instancetype)sharedInstance;

 -(instancetype)init;
 
```

### 4.3 根据您的需求调用不同的InquireType,接口回调方法中的参数就是接口返回的数据类

1. 在 AppDelegate 中添加 username 和 key

```objc
 HeConfigInstance.kHeAppUsername = @"";
 HeConfigInstance.kHeAppKey = @"";
```

2. 设置用户类型SDK会使用不同的api访问

* 付费用户设置为
```
HeConfigInstance.userType = USER_TYPE_USER;
```
* 普通用户设置为
```
HeConfigInstance.userType = USER_TYPE_FREE_USER;
```
* 也可以调用-(void)changeDomain:(NSString *)domain接口修改SDK的访问域名

3. 在需要使用的地方加入以下代码输入所需参数即可
  
```
/**
 * 实况天气
 * 实况天气即为当前时间点的天气状况以及温湿风压等气象指数，具体包含的数据：体感温度、
 * 实测温度、天气状况、风力、风速、风向、相对湿度、大气压强、降水量、能见度等。
 *
 * @param userType 用户类型，分为 付费用户 普通用户
 * @param location 地址详解
 * @param lang     多语言，默认为简体中文
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */

 AllWeatherInquieirs *heWeather = [AllWeatherInquieirs sharedInstance];//或AllWeatherInquieirs *heWeather = [[AllWeatherInquieirs alloc] init];
 heWeather.userType = @"";
 heWeather.location = @"";
 heWeather.lang = @"";//或heWeather.languageType = @"";
 heWeather.unit = @"";//或heWeather.unitType = @"";

 [heWeather weatherWithInquireType:INQUIRE_TYPE_WEATHER_NOW WithSuccess:^(id responseObject) {

 } faileureForError:^(NSError *error) {

 }];
```
# 地址详解，location参数
权限说明 | 代码
--------- | -------------
不传递地址参数 | 自动采用iOS源生定位
城市ID：城市列表 |  location=CN101010100
经纬度格式：经度,纬度（经度在前，纬度在后英文,分隔，十进制格式，北纬东经为正，南纬西经为负 | location=116.40,39.9
城市名称，城市列表 | location=北京、 location=北京市、 location=beijing
城市名称,上级城市 或 省 或 国家，英文逗号分隔，此方式可以在重名的情况下只获取想要的地区的天气数据，例如 西安,陕西 | location=朝阳,北京、 location=chaoyang,beijing
IP | location=60.194.130.1
根据请求自动判断，根据用户的请求获取IP，通过 IP 定位并获取城市数据 | location=auto_ip(固定参数)



# 更多信息上[和风天气官网](https://www.heweather.com) 查看

