//
//  AppDelegate.m
//  HeWeatherDemo
//
//  Created by he on 2018/7/26.
//  Copyright © 2018年 he. All rights reserved.
//

#import "AppDelegate.h"
#import <HeWeather/HeWeather.h>

#ifdef DEBUG
#define HeWeatherLog( s, ... ) printf("class: <%p %s:(%d) > method: %s \n%s\n", self, [[[NSString stringWithUTF8String:__FILE__] lastPathComponent] UTF8String], __LINE__, __PRETTY_FUNCTION__, [[NSString stringWithFormat:(s), ##__VA_ARGS__] UTF8String] )
#else
#define HeWeatherLog( s, ... )
#endif



@interface AppDelegate ()

@end

@implementation AppDelegate

- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    // Override point for customization after application launch.
    //1.获取AllWeatherInquieirs单例对象并对其进行参数设置
    AllWeatherInquieirs *sharedAllWeather =[AllWeatherInquieirs sharedInstance];
    //    包年包月    IOS-hecube
    //    sharedAllWeather.kHeAppUsername = @"HE1812141906451678";
    //    sharedAllWeather.kHeAppKey = @"e61a16dac71e462491b90bc309e44587";
    //    包年包月    IOS-hetest
    //    sharedAllWeather.kHeAppUsername = @"HE1812141907051610";
    //    sharedAllWeather.kHeAppKey = @"dd4bacc73f65411f93007db604c99080";
    //    按量计费    IOS-hecube
    //
//    sharedAllWeather.publicID = @"HE2004221020081507";
//    sharedAllWeather.appKey = @"91172ffbd6b4486ea17e0129faac7d44";
        sharedAllWeather.publicID = @"";
        sharedAllWeather.appKey = @"";
    sharedAllWeather.appType = APP_TYPE_BIZ;
    
    //    sharedAllWeather.languageType = LANGUAGE_TYPE_EN;
    ////    [sharedAllWeather changeDomain:@"https://hfapp-api.heweather.net"];
    
    
    //    sharedAllWeather.kHeAppUsername = @"HE1809171735131493";
    //    sharedAllWeather.kHeAppKey = @"fee86946692e4ba5a812177a6aa0b3a2";
    //    sharedAllWeather.userType = USER_TYPE_FREE_USER;
//            [self getWeatherBaseClass];//常规天气数据集合
    //    [self getWeatherGridNowBaseClass];//格点实况天气
//                [self getWeatherGridMinuteBaseClass];//分钟级降雨（邻近预报）
//                [self getAirNowBaseClass];//空气质量实况
//                [self getAlarmBaseClass];//天气灾害预警
//            [self getAlarmAllBaseClass];
//                [self getScenicBaseClass];//景点天气预报
//        [self getWeatherLifestyleBaseClass];//生活指数
//    [sharedAllWeather changeDomain:@"http://192.168.1.9:8084"];
//            [self getSearchBaseClasse];//城市查询
    [self getWeatherHistoricalBaseClass];//历史数据
//    [self getMoonSoonClasse];
    return YES;
}

// 生活指数
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getWeatherLifestyleBaseClass{
    HeConfigInstance.location = @"101010100";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_INDICES_3D WithSuccess:^(IndicesBaseClass  *responseObject) {
        
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
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
    HeConfigInstance.location = @"CN101010300";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_72H WithSuccess:^(WeatherBaseClass  *responseObject) {
        
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
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
    HeConfigInstance.location = @"116.40,39.99";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_MINUTELY WithSuccess:^(WeatherMinutelyBaseClass  *responseObject) {
        
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
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
    HeConfigInstance.location = @"116.40,39.99";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
//    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_GRID WithSuccess:^(WeatherGridForecastBaseClass  *responseObject) {
//
//        HeWeatherLog(@"描述->%@",[responseObject description]);
//
//    } faileureForError:^(NSError *error) {
//        HeWeatherLog(@"error->%@",error);
//
//    }];
    
}

//天气灾害预警
/**
 * @param location (如果不添加此参数,framework 会根据GPS联网定位,根据当前经纬度查询)所查询的地区，可通过该地区名称、ID、Adcode、IP和经纬度进行查询经纬度格式：纬度,经度
 *                 （英文,分隔，十进制格式，北纬东经为正，南纬西经为负)
 * @param lang     多语言，默认为简体中文，其他语言请参照多语言对照表
 * @param unit     单位选择，公制（m）或英制（i），默认为公制单位
 */
-(void)getAlarmBaseClass{
    HeConfigInstance.location = @"101310213";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WARNING WithSuccess:^(WarningBaseClass  *responseObject) {
        
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
    }];
    
}
// 天气灾害预警集合

-(void)getAlarmAllBaseClass{
    HeConfigInstance.range = @"cn";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WARNINGLIST WithSuccess:^(WarningListClass  *responseObject) {
        HeWeatherLog(@"描述->%@",[responseObject description]);
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
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
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_POI_NOW WithSuccess:^(WeatherPoiBaseClass  *responseObject) {
        
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
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
    HeConfigInstance.location = @"CN101010100";
    HeConfigInstance.lang = @"";
    HeConfigInstance.unit = @"";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_WEATHER_AIR_5D WithSuccess:^(AirBaseClass  *responseObject) {
        
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
    }];
    
}
// TODO: 历史天气
/**
 * @param location 仅支持城市ID
 * @param date     日期
 */
-(void)getWeatherHistoricalBaseClass{
    HeConfigInstance.location = @"101010100";
    HeConfigInstance.date = @"20200701";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_HISTORICAL_WEATHER WithSuccess:^(WeatherHistoricalBaseClass  *responseObject) {
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
    }];
    
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
    
    HeConfigInstance.location = @"116.40,39.99";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_GEO_POI_RANGE WithSuccess:^(GeoBaseClass  *responseObject) {
        HeWeatherLog(@"描述->%@",[responseObject description]);
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
    }];
    
}
-(void)getMoonSoonClasse{
    HeConfigInstance.location = @"101010100";
    HeConfigInstance.date = @"20200626";
    [HeConfigInstance weatherWithInquireType:INQUIRE_TYPE_SUNMOON WithSuccess:^(SunMoonBaseModel  *responseObject) {
        HeWeatherLog(@"描述->%@",[responseObject description]);
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
    }];
}
@end
