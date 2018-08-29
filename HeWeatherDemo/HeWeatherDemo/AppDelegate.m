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
    sharedAllWeather.kHeAppUsername = @"HE1805081336571647";
    sharedAllWeather.kHeAppKey = @"0850d8f6b3f942008cd753614a8d4f34";
    sharedAllWeather.userType = USER_TYPE_FREE_USER;
    sharedAllWeather.location = @"";
    sharedAllWeather.lang = @"";
    dispatch_group_t group = dispatch_group_create();
    dispatch_queue_t queue = dispatch_get_global_queue(0, 0);
    dispatch_group_async(group, queue, ^{
        [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_FORECAST]; // 3-10天天气预报
    });
    dispatch_group_async(group, queue, ^{
        [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_NOW]; // 3-10天天气预报
    });
    dispatch_group_async(group, queue, ^{
        [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_LIFESTYLE]; // 3-10天天气预报
    });
    dispatch_group_notify(group, dispatch_get_main_queue(), ^{
    });
    //    [sharedAllWeather weatherWithInquireType:INQUIRE_TYPE_WEATHER_NOW WithSuccess:^(id responseObject) {
    //        HeWeatherLog(@"描述->%@",[responseObject description]);
    //
    //    } faileureForError:^(NSError *error) {
    //        HeWeatherLog(@"描述->%@",[error description]);
    //    }];
    //    //查询太阳高度必选以下参数
    //    sharedAllWeather.date = @"2010-01-01";
    //    sharedAllWeather.time = @"1230";
    //    sharedAllWeather.tz = @"8";
    //    sharedAllWeather.lat = @"36.088";
    //    sharedAllWeather.lon = @"120.343";
    //    sharedAllWeather.alt = @"43";
    //
    //    //2.调用查询接口并返回对应数据对象
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_FORECAST]; // 3-10天天气预报
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_NOW];// 实况天气
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_HOURLY];// 逐小时预报
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_LIFESTYLE];// 生活指数
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER];// 常规天气数据集合
    //
    //    //分钟级降雨（邻近预报）
    //    sharedAllWeather.location = @"116.40,39.9";//（格点测试参数）
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_GRID_MINUTE];
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_GRID_NOW];// 格点实况天气
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_GRID_FORECAST];// 格点7天预报
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_GRID_HOURLY];// 格点逐小时预报
    //    //天气灾害预警
    //    //sharedAllWeather.location = @"广安";
    //    [self heWeatherTestWith:INQUIRE_TYPE_ALARM];//天气灾害预警
    //    [self heWeatherTestWith:INQUIRE_TYPE_ALARM_ALL];// 天气灾害预警集合
    //    //sharedAllWeather.location = @"CN10101010004A";//景点天气预报测试参数
    //    [self heWeatherTestWith:INQUIRE_TYPE_SCENIC];// 景点天气预报
    //    [self heWeatherTestWith:INQUIRE_TYPE_AIR_NOW];// 空气质量实况
    //    [self heWeatherTestWith:INQUIRE_TYPE_AIR_FORECAST];// 空气质量7天预报
    //    [self heWeatherTestWith:INQUIRE_TYPE_AIR_HOURLY];// 空气质量逐小时预报
    //    [self heWeatherTestWith:INQUIRE_TYPE_AIR];// 空气质量数据集合
    //    [self heWeatherTestWith:INQUIRE_TYPE_WEATHER_HISTORICAL];// 历史天气
    //    [self heWeatherTestWith:INQUIRE_TYPE_SOLAR_SUNRISE_SUNSET];// 日出日落
    //    [self heWeatherTestWith:INQUIRE_TYPE_MAP_CLOUD_MAP];// 卫星云图
    //    [self heWeatherTestWith:INQUIRE_TYPE_SOLAR_ELEVATION_ANGLR];// 太阳高度
    //    [self heWeatherTestWith:INQUIRE_TYPE_SEARCH];// 城市查询
    return YES;
}


/**6
 HeWeatherSDK查询接口使用范例
 @param inquireType INQUIRE_TYPE
 */
-(void)heWeatherTestWith:(INQUIRE_TYPE)inquireType{
    
    [HeConfigInstance weatherWithInquireType:inquireType WithSuccess:^(WeatherForecastBaseClass  *responseObject) {
        
        HeWeatherLog(@"描述->%@",[responseObject description]);
        
    } faileureForError:^(NSError *error) {
        HeWeatherLog(@"error->%@",error);
        
    }];
    
}


@end
