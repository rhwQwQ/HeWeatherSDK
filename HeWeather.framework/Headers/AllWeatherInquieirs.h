//
//  AllWeatherInquieirs.h
//  HEWEATHER
//
//  Created by Coder on 2018/4/29.
//  Copyright © 2018年 Song. All rights reserved.
//

#define HeConfigInstance [AllWeatherInquieirs sharedInstance]

#import <Foundation/Foundation.h>

typedef NS_ENUM(NSInteger, USER_TYPE) {
    USER_TYPE_USER = 1,// 付费用户
    USER_TYPE_FREE_USER = 2,// 普通用户
};

typedef NS_ENUM(NSInteger, INQUIRE_TYPE) {
    INQUIRE_TYPE_WEATHER_FORECAST = 1,// 3-10天天气预报
    INQUIRE_TYPE_WEATHER_NOW = 2,// 实况天气
    INQUIRE_TYPE_WEATHER_HOURLY = 3,// 逐小时预报
    INQUIRE_TYPE_WEATHER_LIFESTYLE = 4,// 生活指数
    INQUIRE_TYPE_WEATHER = 5,// 常规天气数据集合
    INQUIRE_TYPE_WEATHER_GRID_MINUTE = 6,// 分钟级降雨（邻近预报）
    INQUIRE_TYPE_WEATHER_GRID_NOW = 7,// 格点实况天气
    INQUIRE_TYPE_WEATHER_GRID_FORECAST = 8,// 格点7天预报
    INQUIRE_TYPE_WEATHER_GRID_HOURLY = 9,// 格点逐小时预报
    INQUIRE_TYPE_ALARM = 10,// 天气灾害预警
    INQUIRE_TYPE_ALARM_ALL = 11,// 天气灾害预警集合
    INQUIRE_TYPE_SCENIC = 12,// 景点天气预报
    INQUIRE_TYPE_AIR_NOW = 13,// 空气质量实况
    INQUIRE_TYPE_AIR_FORECAST = 14,// 空气质量7天预报
    INQUIRE_TYPE_AIR_HOURLY = 15,// 空气质量逐小时预报
    INQUIRE_TYPE_AIR = 16,// 空气质量数据集合
    INQUIRE_TYPE_WEATHER_HISTORICAL = 17,// 历史天气
    INQUIRE_TYPE_SOLAR_SUNRISE_SUNSET = 18,// 日出日落
    INQUIRE_TYPE_MAP_CLOUD_MAP = 19,// 卫星云图
    INQUIRE_TYPE_SOLAR_ELEVATION_ANGLR = 20,// 太阳高度
    INQUIRE_TYPE_SEARCH = 21,// 城市查询
};

typedef NS_ENUM(NSInteger, LANGUAGE_TYPE) {
    LANGUAGE_TYPE_ZH = 0,// 简体中文
    LANGUAGE_TYPE_ZHHK = 1,// 繁体中文
    LANGUAGE_TYPE_EN = 2,// 英文
    LANGUAGE_TYPE_DE = 3,// 德语
    LANGUAGE_TYPE_ES = 4,// 西班牙语
    LANGUAGE_TYPE_FR = 5,// 法语
    LANGUAGE_TYPE_IT = 6,// 意大利语
    LANGUAGE_TYPE_JP = 7,// 日语
    LANGUAGE_TYPE_KR = 8,// 韩语
    LANGUAGE_TYPE_RU = 9,// 俄语
    LANGUAGE_TYPE_IN = 10,// 印度语
    LANGUAGE_TYPE_TH = 11,// 泰语
    LANGUAGE_TYPE_ZHCN = 12,// 简体中文
    LANGUAGE_TYPE_CN = 13,// 简体中文
    LANGUAGE_TYPE_HK = 14,// 繁体中文
};

typedef NS_ENUM(NSInteger, UNIT_TYPE) {
    UNIT_TYPE_M = 0,// 公制
    UNIT_TYPE_I = 1,// 英制
};

@interface AllWeatherInquieirs : NSObject

#pragma mark -  请在 AppDelegate 中填写

/**
 用户ID，登录控制台可查看
 必填
 */

@property (nonatomic, copy) NSString *kHeAppUsername;

/**
 用户认证key，登录控制台可查看
 必填
 */

@property (nonatomic, copy) NSString *kHeAppKey;

/** 根据接口需要填写 必填项 选填项 */

#pragma mark - 必选参数

/**
 用户类型，分为 付费用户 普通用户
 必选
*/

@property (nonatomic, assign) USER_TYPE userType;

/**
 需要查询的城市或地区，可输入以下值：
 1. 城市ID：城市列表
 2. 经纬度格式：经度,纬度（经度在前纬度在后，英文,分隔，十进制格式，北纬东经为正，南纬西经为负
 3. 城市名称，支持中英文和汉语拼音
 4. 城市名称，上级城市 或 省 或 国家，英文,分隔，此方式可以在重名的情况下只获取想要的地区的天气数据，例如 西安,陕西
 5. IP
 6. 根据请求自动判断，根据用户的请求获取IP，通过 IP 定位并获取城市数据
 7. 可为空，系统自动获取当前设备所在经纬度，然后将获取到的经纬度作为location参数调用传location的接口
 */

@property (nonatomic, copy) NSString *location;

/**
 获取制定日期的历史数据，格式为yyyy-mm-dd
 必选
 */

@property (nonatomic, copy) NSString *date;

/**
 查询时间，格式为HHmm，24 时制
 必选
 */

@property (nonatomic, copy) NSString *time;

/**
 查询地区所在时区
 必选
 */

@property (nonatomic, copy) NSString *tz;

/**
 所查询地区的纬度
 纬度采用十进制格式，北纬为正，南纬为负
 必选
 */

@property (nonatomic, copy) NSString *lat;

/**
 所查询地区的经度
 经度采用十进制格式，东经为正，西经为负
 */

@property (nonatomic, copy) NSString *lon;

/**
 海拔高度，单位为米
 必选
 */

@property (nonatomic, copy) NSString *alt;

#pragma mark - 可选参数

/**
 多语言，可以不使用该参数，默认为简体中文
 详见多语言参数
 参数若不传，则默认传"zh"
 可选
 */

@property (nonatomic, copy) NSString *lang;

@property (nonatomic, assign) LANGUAGE_TYPE languageType;

/**
 单位选择，公制（m）或英制（i），默认为公制单位
 详见度量衡单位参数
 若不传，则默认传"m"
 可选
 */

@property (nonatomic, copy) NSString *unit;

@property (nonatomic, assign) UNIT_TYPE unitType;

/**
 查询方式
 可选值:模糊检索(equal)、精准检索(match)
 默认:match
 可选
 */

@property (nonatomic, copy) NSString *mode;

/**
 城市查询分组，默认为全球城市，可按照任意国家范围进行查询，国家名称需使用ISO 3166 所定义的国家代码
 特殊值：world，查询全球城市
 特殊值：scenic，查询中国4A和5A级景点地区
 特殊值：overseas，查询除中国以外的全部海外城市
 查询分组可最多设置20个值，多个值用英文,连接
 默认:全球城市
 可选
 */

@property (nonatomic, copy) NSString *group;

/**
 搜索查询返回的数量
 默认返回10个与查询城市或的确相关性最强的结果，可选1-20个，当使用IP地址或坐标查询时，仅返回一个结果
 默认:number=@"10"
 可选
 */

@property (nonatomic, copy) NSString *number;


#pragma mark - Init

+ (instancetype)sharedInstance;

- (instancetype)init;

#pragma mark - Inquire Action

/**
 查询类型 INQUIRE_TYPE 必填
 根据 type 类型进行对应接口查询
 */

- (void)weatherWithInquireType:(INQUIRE_TYPE)inquireType
                   WithSuccess:(void(^)(id responseObject))getSuccess
              faileureForError:(void(^)(NSError *error))getError;

@end
