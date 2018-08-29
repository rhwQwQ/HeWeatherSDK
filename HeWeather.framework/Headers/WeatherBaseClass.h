//
//Created by HEWEATHER on 18/07/27.
//常规天气数据集合

#import "HeWeatherBaseModel.h"

@class WeatherBaseClassNow,WeatherBaseClassBasic,WeatherBaseClassUpdate,WeatherBaseClassDaily_Forecast,WeatherBaseClassHourly,WeatherBaseClassLifestyle;
@interface WeatherBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) NSArray<WeatherBaseClassHourly *> *hourly;

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) NSArray<WeatherBaseClassDaily_Forecast *> *daily_forecast;

@property (nonatomic, strong) WeatherBaseClassNow *now;

@property (nonatomic, strong) WeatherBaseClassUpdate *update;

@property (nonatomic, strong) WeatherBaseClassBasic *basic;

@property (nonatomic, strong) NSArray<WeatherBaseClassLifestyle *> *lifestyle;

@end
@interface WeatherBaseClassNow : HeWeatherBaseModel

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

@interface WeatherBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

@interface WeatherBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherBaseClassDaily_Forecast : HeWeatherBaseModel

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

@interface WeatherBaseClassHourly : HeWeatherBaseModel

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

@interface WeatherBaseClassLifestyle : HeWeatherBaseModel

@property (nonatomic, copy) NSString *brf;

@property (nonatomic, copy) NSString *txt;

@property (nonatomic, copy) NSString *type;

@end

