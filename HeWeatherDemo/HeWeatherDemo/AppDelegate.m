//
//  AppDelegate.m
//  HeWeatherDemo
//
//  Created by he on 2018/8/27.
//  Copyright © 2018年 HeFengTianQi. All rights reserved.
//

#import "AppDelegate.h"
#import <HeWeather/HeWeather.h>
#ifdef DEBUG
#define NSLog( s, ... ) printf("class: <%p %s:(%d) > method: %s \n%s\n", self, [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(s), ##__VA_ARGS__] UTF8String] )
#else
#define NSLog( s, ... )
#endif
@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    //1.获取AllWeatherInquieirs单例对象并对其进行参数设置
    AllWeatherInquieirs *sharedAllWeather =[AllWeatherInquieirs sharedInstance];
    sharedAllWeather.kHeAppUsername = @"userName";
    sharedAllWeather.kHeAppKey = @"key";
    sharedAllWeather.userType = USER_TYPE_USER;
    
//    [self getSearchBaseClasse];//城市查询
//    [self getWeatherForecastBaseClass];// 3-10天天气预报
//    [self getWeatherNowBaseClass];// 实况天气
//    [self getWeatherHourlyBaseClass];//逐小时预报
//    [self getWeatherLifestyleBaseClass];//生活指数
//    [self getWeatherBaseClass];//常规天气数据集合
//    [self getWeatherGridMinuteBaseClass];//分钟级降雨（邻近预报）
//    [self getWeatherGridNowBaseClass];//格点实况天气
//    [self getWeatherGridForecastBaseClass];//格点7天预报
//    [self getWeatherGridHourlyBaseClass];//格点逐小时预报
//    [self getAlarmBaseClass];//天气灾害预警
//    [self getAlarmAllBaseClass];//天气灾害预警集合
//    [self getScenicBaseClass];//景点天气预报
//    [self getAirNowBaseClass];//空气质量实况
//    [self getAirForecastBaseClass];//空气质量7天预报
//    [self getAirHourlyBaseClass];//空气质量逐小时预报
//    [self getAirBaseClass];//空气质量数据集合
//    [self getCloudMapImage];//卫星云图
//    [self getSolarElevationAngleBaseClass];//太阳高度
//    [self getSolarSunriseSunsetBaseClass];//日出日落
//    [self getWeatherHistoricalBaseClass];//历史数据

    
    return YES;
}
// 城市查询
/**
 * @param location（不传默认使用手机定位）
 (输入需要查询的城市名称，支持模糊搜索，可输入中文（至少一个汉字）、英文（至少2个字母）、IP地址、坐标（经度在前纬度在后，英文,分割）、ADCode
 * @param group (可选，默认：match)
 城市查询分组，默认为全球城市，可按照任意国家范围进行查询，国家名称需使用[ISO 3166 所定义的国家代码](https://www.heweather.com/blog/iso-3166)
 特殊值：world，查询全球城市
 特殊值：scenic，查询中国4A和5A级景点地区
 特殊值：overseas，查询除中国以外的全部海外城市
 查询分组可最多设置20个值，多个值用英文','连接
 * @param mode (可选值: equal、match，默认：match) 查询方式（模糊检索 or 精准检索)
 * @param number（可选 默认：number=10）
 搜索查询返回的数量，默认返回10个与查询城市或的确相关性最强的结果，可选1-20个，当使用IP地址或坐标查询时，仅返回一个结果
 * @param lang (可选，默认lang=zh)    多语言，默认为简体中文，其他语言请参照多语言对照表
 */
-(void)getSearchBaseClasse{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.mode = @"";
    HeConfigInstance.group = @"";
    HeConfigInstance.number = @"";
    HeConfigInstance.lang = @"";
    
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_SEARCH WithSuccess:^(SearchBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 3-10天天气预报
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherForecastBaseClass{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_FORECAST WithSuccess:^(WeatherForecastBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 实况天气
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherNowBaseClass{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_NOW WithSuccess:^(WeatherNowBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
//逐小时预报
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherHourlyBaseClass{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_HOURLY WithSuccess:^(WeatherHourlyBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 生活指数
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherLifestyleBaseClass{
    HeConfigInstance.location = @"CN101010100";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_LIFESTYLE WithSuccess:^(WeatherLifestyleBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 常规天气数据集合
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherBaseClass{
    HeConfigInstance.location = @"CN101010100";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER WithSuccess:^(WeatherBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
//分钟级降雨
/**
 * @param location  (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)仅支持所查询的地区经纬度查询
 *                 经纬度格式：纬度,经度（英文,分隔，十进制格式，北纬东经为正，南纬西经为负）
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherGridMinuteBaseClass{
    HeConfigInstance.location = @"116.40,39.9";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_GRID_MINUTE WithSuccess:^(WeatherGridMinuteBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 格点实况天气
/**
 * @param location  (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)仅支持所查询的地区经纬度查询
 *                 经纬度格式：纬度,经度（英文,分隔，十进制格式，北纬东经为正，南纬西经为负）
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherGridNowBaseClass{
    HeConfigInstance.location = @"116.40,39.9";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_GRID_NOW WithSuccess:^(WeatherGridNowBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 格点7天预报
/**
 * @param location  (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)仅支持所查询的地区经纬度查询
 *                 经纬度格式：纬度,经度（英文,分隔，十进制格式，北纬东经为正，南纬西经为负）
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherGridForecastBaseClass{
    HeConfigInstance.location = @"116.40,39.9";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_GRID_FORECAST WithSuccess:^(WeatherGridForecastBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 格点逐小时预报
/**
 * @param location  (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)仅支持所查询的地区经纬度查询
 *                 经纬度格式：纬度,经度（英文,分隔，十进制格式，北纬东经为正，南纬西经为负）
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherGridHourlyBaseClass{
    HeConfigInstance.location = @"116.40,39.9";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_GRID_HOURLY WithSuccess:^(WeatherGridHourlyBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
//天气灾害预警
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getAlarmBaseClass{
    HeConfigInstance.location = @"徐州";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_ALARM WithSuccess:^(AlarmBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 天气灾害预警集合

-(void)getAlarmAllBaseClass{
    
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_ALARM_ALL WithSuccess:^(AlarmAllBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 景点天气预报
/**
 * @param location 景点天气仅支持使用景点ID获取数据
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getScenicBaseClass{
    HeConfigInstance.location = @"CN10101010004A";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_SCENIC WithSuccess:^(ScenicBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 空气质量实况
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询
 *                 经纬度格式：纬度,经度（英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getAirNowBaseClass{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_AIR_NOW WithSuccess:^(AirNowBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 空气质量7天预报
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询
 *                 经纬度格式：纬度,经度（英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getAirForecastBaseClass{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_AIR_FORECAST WithSuccess:^(AirForecastBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 废弃: 空气质量逐小时预报
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getAirHourlyBaseClass{
    HeConfigInstance.location = @"CN101010100";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_AIR_HOURLY WithSuccess:^(AirHourlyBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 空气质量数据集合
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getAirBaseClass{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_AIR WithSuccess:^(AirBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 历史天气
/**
 * @param location 仅支持城市ID
 * @param date     日期
 */
-(void)getWeatherHistoricalBaseClass{
    HeConfigInstance.location = @"CN101010100";
    HeConfigInstance.date = @"2018-08-30";
    
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_HISTORICAL WithSuccess:^(WeatherHistoricalBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 日出日落
/**
 * @param location 可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 * @param lang     多语言，可以不使用该参数，默认为简体中文，其他语言请参照多语言对照表
 */
-(void)getSolarSunriseSunsetBaseClass{
    HeConfigInstance.location = @"北京";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_SOLAR_SUNRISE_SUNSET WithSuccess:^(SolarSunriseSunsetBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 卫星云图
-(void)getCloudMapImage{
    
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_MAP_CLOUD_MAP WithSuccess:^(UIImage  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}
// 太阳高度
/**
 * @param lat      所查询地区的纬度(纬度采用十进制格式，北纬为正，南纬为负)
 * @param lon      所查询地区的经度(经度采用十进制格式，东经为正，西经为负)
 * @param alt      海拔高度，单位：米
 * @param date     查询日期，格式为yyyy-MM-dd
 * @param time     查询时间，格式为HHmm，24 时制
 * @param tz       查询地区所在时区
 */
-(void)getSolarElevationAngleBaseClass{
    HeConfigInstance.date = @"2010-01-01";
    HeConfigInstance.time = @"1230";
    HeConfigInstance.tz = @"8";
    HeConfigInstance.lat = @"36.088";
    HeConfigInstance.lon = @"120.343";
    HeConfigInstance.alt = @"43";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_SOLAR_ELEVATION_ANGLR WithSuccess:^(SolarElevationAngleBaseClass  *responseObject) {
        
        NSLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        NSLog(@"error->%@",error);
        
    }];
    
}





@end
