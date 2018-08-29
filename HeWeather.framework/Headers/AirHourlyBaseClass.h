//
//Created by HEWEATHER on 18/07/27.
//空气质量逐小时预报

#import "HeWeatherBaseModel.h"

@class AirHourlyBaseClassBasic,AirHourlyBaseClassUpdate,AirHourlyBaseClassAir_Hourly;
@interface AirHourlyBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) AirHourlyBaseClassBasic *basic;

@property (nonatomic, strong) AirHourlyBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<AirHourlyBaseClassAir_Hourly *> *air_hourly;

@end
@interface AirHourlyBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *cid;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cnty;

@end

@interface AirHourlyBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface AirHourlyBaseClassAir_Hourly : HeWeatherBaseModel

@property (nonatomic, copy) NSString *qlty;

@property (nonatomic, copy) NSString *pm25;

@property (nonatomic, copy) NSString *time;

@property (nonatomic, copy) NSString *aqi;

@property (nonatomic, copy) NSString *no2;

@property (nonatomic, copy) NSString *co;

@property (nonatomic, copy) NSString *pm10;

@property (nonatomic, copy) NSString *main;

@property (nonatomic, copy) NSString *so2;

@property (nonatomic, copy) NSString *o3;

@end

