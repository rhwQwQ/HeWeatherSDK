//
//Created by HEWEATHER on 18/07/27.
//格点逐小时预报

#import "HeWeatherBaseModel.h"

@class WeatherGridHourlyBaseClassBasic,WeatherGridHourlyBaseClassUpdate,WeatherGridHourlyBaseClassGrid_Hourly;
@interface WeatherGridHourlyBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) NSArray<WeatherGridHourlyBaseClassGrid_Hourly *> *grid_hourly;

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) WeatherGridHourlyBaseClassBasic *basic;

@property (nonatomic, strong) WeatherGridHourlyBaseClassUpdate *update;

@end
@interface WeatherGridHourlyBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *tz;

@end

@interface WeatherGridHourlyBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherGridHourlyBaseClassGrid_Hourly : HeWeatherBaseModel

@property (nonatomic, copy) NSString *wind_sc;

@property (nonatomic, copy) NSString *cond_txt;

@property (nonatomic, copy) NSString *cond_code;

@property (nonatomic, copy) NSString *time;

@property (nonatomic, copy) NSString *pcpn;

@property (nonatomic, copy) NSString *tmp;

@property (nonatomic, copy) NSString *wind_dir;

@end

