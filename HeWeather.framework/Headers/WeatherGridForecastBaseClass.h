//
//Created by HEWEATHER on 18/07/27.
//格点7天预报

#import "HeWeatherBaseModel.h"

@class WeatherGridForecastBaseClassBasic,WeatherGridForecastBaseClassUpdate,WeatherGridForecastBaseClassGrid_Forecast;
@interface WeatherGridForecastBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) WeatherGridForecastBaseClassBasic *basic;

@property (nonatomic, strong) NSArray<WeatherGridForecastBaseClassGrid_Forecast *> *grid_forecast;

@property (nonatomic, strong) WeatherGridForecastBaseClassUpdate *update;

@end
@interface WeatherGridForecastBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *tz;

@end

@interface WeatherGridForecastBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherGridForecastBaseClassGrid_Forecast : HeWeatherBaseModel

@property (nonatomic, copy) NSString *cond_code_n;

@property (nonatomic, copy) NSString *tmp_min;

@property (nonatomic, copy) NSString *wind_dir_d;

@property (nonatomic, copy) NSString *cond_txt_d;

@property (nonatomic, copy) NSString *wind_sc_n;

@property (nonatomic, copy) NSString *date;

@property (nonatomic, copy) NSString *tmp_max;

@property (nonatomic, copy) NSString *wind_dir_n;

@property (nonatomic, copy) NSString *cond_txt_n;

@property (nonatomic, copy) NSString *wind_sc_d;

@property (nonatomic, copy) NSString *cond_code_d;

@end

