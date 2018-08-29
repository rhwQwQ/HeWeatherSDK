//
//Created by HEWEATHER on 18/07/27.
//逐小时预报

#import "HeWeatherBaseModel.h"

@class WeatherHourlyBaseClassBasic,WeatherHourlyBaseClassUpdate,WeatherHourlyBaseClassHourly;
@interface WeatherHourlyBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) WeatherHourlyBaseClassBasic *basic;

@property (nonatomic, strong) WeatherHourlyBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<WeatherHourlyBaseClassHourly *> *hourly;

@end
@interface WeatherHourlyBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

@interface WeatherHourlyBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherHourlyBaseClassHourly : HeWeatherBaseModel

@property (nonatomic, copy) NSString *hum;

@property (nonatomic, copy) NSString *cloud;

@property (nonatomic, copy) NSString *pres;

@property (nonatomic, copy) NSString *wind_dir;

@property (nonatomic, copy) NSString *time;

@property (nonatomic, copy) NSString *wind_spd;

@property (nonatomic, copy) NSString *wind_deg;

@property (nonatomic, copy) NSString *wind_sc;

@property (nonatomic, copy) NSString *cond_txt;

@property (nonatomic, copy) NSString *tmp;

@property (nonatomic, copy) NSString *pop;

@property (nonatomic, copy) NSString *cond_code;

@end

