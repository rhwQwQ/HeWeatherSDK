//
//Created by HEWEATHER on 18/07/27.
// 实况天气
#import "HeWeatherBaseModel.h"

@class WeatherNowBaseClassBasic,WeatherNowBaseClassNow,WeatherNowBaseClassUpdate;
@interface WeatherNowBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) WeatherNowBaseClassBasic *basic;

@property (nonatomic, strong) WeatherNowBaseClassNow *now;

@property (nonatomic, strong) WeatherNowBaseClassUpdate *update;

@end
@interface WeatherNowBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

@interface WeatherNowBaseClassNow : HeWeatherBaseModel

@property (nonatomic, copy) NSString *hum;

@property (nonatomic, copy) NSString *fl;

@property (nonatomic, copy) NSString *wind_dir;

@property (nonatomic, copy) NSString *pres;

@property (nonatomic, copy) NSString *vis;

@property (nonatomic, copy) NSString *wind_spd;

@property (nonatomic, copy) NSString *wind_deg;

@property (nonatomic, copy) NSString *wind_sc;

@property (nonatomic, copy) NSString *pcpn;

@property (nonatomic, copy) NSString *cond_txt;

@property (nonatomic, copy) NSString *tmp;

@property (nonatomic, copy) NSString *cond_code;

@end

@interface WeatherNowBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

