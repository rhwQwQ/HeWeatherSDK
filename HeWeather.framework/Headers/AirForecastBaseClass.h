//
//Created by HEWEATHER on 18/07/27.
//空气质量7天预报

#import "HeWeatherBaseModel.h"

@class AirForecastBaseClassBasic,AirForecastBaseClassUpdate,AirForecastBaseClassAir_Forecast;
@interface AirForecastBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) AirForecastBaseClassBasic *basic;

@property (nonatomic, strong) AirForecastBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<AirForecastBaseClassAir_Forecast *> *air_forecast;

@end
@interface AirForecastBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *cid;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cnty;

@end

@interface AirForecastBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface AirForecastBaseClassAir_Forecast : HeWeatherBaseModel

@property (nonatomic, copy) NSString *qlty;

@property (nonatomic, copy) NSString *pm25;

@property (nonatomic, copy) NSString *aqi;

@property (nonatomic, copy) NSString *co;

@property (nonatomic, copy) NSString *date;

@property (nonatomic, copy) NSString *no2;

@property (nonatomic, copy) NSString *main;

@property (nonatomic, copy) NSString *o3;

@property (nonatomic, copy) NSString *pm10;

@property (nonatomic, copy) NSString *so2;

@end

