//
//Created by HEWEATHER on 18/07/27.
//格点实况天气

#import "HeWeatherBaseModel.h"

@class WeatherGridNowBaseClassBasic,WeatherGridNowBaseClassUpdate,WeatherGridNowBaseClassGrid_Now;
@interface WeatherGridNowBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) WeatherGridNowBaseClassGrid_Now *grid_now;

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) WeatherGridNowBaseClassBasic *basic;

@property (nonatomic, strong) WeatherGridNowBaseClassUpdate *update;

@end
@interface WeatherGridNowBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *tz;

@end

@interface WeatherGridNowBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherGridNowBaseClassGrid_Now : HeWeatherBaseModel

@property (nonatomic, copy) NSString *pcpn_10m;

@property (nonatomic, copy) NSString *cond_txt;

@property (nonatomic, copy) NSString *cond_code;

@property (nonatomic, copy) NSString *pres;

@property (nonatomic, copy) NSString *wind_sc;

@property (nonatomic, copy) NSString *hum;

@property (nonatomic, copy) NSString *pcpn;

@property (nonatomic, copy) NSString *tmp;

@property (nonatomic, copy) NSString *wind_dir;

@end

