//
//Created by HEWEATHER on 18/07/27.
// 3-10天天气预报
#import "HeWeatherBaseModel.h"

@class WeatherForecastBaseClassBasic,WeatherForecastBaseClassUpdate,WeatherForecastBaseClassDaily_Forecast;
@interface WeatherForecastBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) WeatherForecastBaseClassBasic *basic;

@property (nonatomic, strong) WeatherForecastBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<WeatherForecastBaseClassDaily_Forecast *> *daily_forecast;

@end
@interface WeatherForecastBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

@interface WeatherForecastBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherForecastBaseClassDaily_Forecast : HeWeatherBaseModel

@property (nonatomic, copy) NSString *hum;

@property (nonatomic, copy) NSString *cond_txt_d;

@property (nonatomic, copy) NSString *wind_dir;

@property (nonatomic, copy) NSString *pres;

@property (nonatomic, copy) NSString *tmp_max;

@property (nonatomic, copy) NSString *uv_index;

@property (nonatomic, copy) NSString *vis;

@property (nonatomic, copy) NSString *wind_spd;

@property (nonatomic, copy) NSString *cond_code_n;

@property (nonatomic, copy) NSString *date;

@property (nonatomic, copy) NSString *wind_deg;

@property (nonatomic, copy) NSString *cond_code_d;

@property (nonatomic, copy) NSString *pcpn;

@property (nonatomic, copy) NSString *tmp_min;

@property (nonatomic, copy) NSString *cond_txt_n;

@property (nonatomic, copy) NSString *wind_sc;

@property (nonatomic, copy) NSString *pop;

@end

