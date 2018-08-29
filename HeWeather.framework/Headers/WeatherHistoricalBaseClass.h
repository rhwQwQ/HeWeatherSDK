//
//Created by HEWEATHER on 18/07/27.
//历史数据

#import "HeWeatherBaseModel.h"

@class WeatherHistoricalBaseClassBasic,WeatherHistoricalBaseClassDaily_Weather,WeatherHistoricalBaseClassHourly_Weather;
@interface WeatherHistoricalBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) NSArray<WeatherHistoricalBaseClassBasic *> *basic;

@property (nonatomic, strong) NSArray<WeatherHistoricalBaseClassDaily_Weather *> *daily_weather;

@property (nonatomic, strong) NSArray<WeatherHistoricalBaseClassHourly_Weather *> *hourly_weather;

@property (nonatomic, copy) NSString *status;

@end
@interface WeatherHistoricalBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *type;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

@interface WeatherHistoricalBaseClassDaily_Weather : HeWeatherBaseModel

@property (nonatomic, strong) NSString *mr;
@property (nonatomic, strong) NSString *tmpMin;
@property (nonatomic, strong) NSString *pres;
@property (nonatomic, strong) NSString *sr;
@property (nonatomic, strong) NSString *hum;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *ms;
@property (nonatomic, strong) NSString *ss;
@property (nonatomic, strong) NSString *tmpMax;
@property (nonatomic, strong) NSString *pcpn;

@end

@interface WeatherHistoricalBaseClassHourly_Weather : HeWeatherBaseModel

@property (nonatomic, strong) NSString *brief;
@property (nonatomic, strong) NSString *spd;
@property (nonatomic, strong) NSString *pres;
@property (nonatomic, strong) NSString *code;
@property (nonatomic, strong) NSString *hum;
@property (nonatomic, strong) NSString *sc;
@property (nonatomic, strong) NSString *date;
@property (nonatomic, strong) NSString *dir;
@property (nonatomic, strong) NSString *tmp;

@end

