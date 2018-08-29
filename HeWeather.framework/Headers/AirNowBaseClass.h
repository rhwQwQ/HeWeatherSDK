//
//Created by HEWEATHER on 18/07/27.
//空气质量实况

#import "HeWeatherBaseModel.h"

@class AirNowBaseClassBasic,AirNowBaseClassUpdate,AirNowBaseClassAir_Now_City,AirNowBaseClassAir_Now_Station;
@interface AirNowBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) AirNowBaseClassAir_Now_City *air_now_city;

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) AirNowBaseClassBasic *basic;

@property (nonatomic, strong) AirNowBaseClassUpdate *update;

@property (nonatomic, strong) NSArray<AirNowBaseClassAir_Now_Station *> *air_now_station;

@end
@interface AirNowBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cid;

@end

@interface AirNowBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface AirNowBaseClassAir_Now_City : HeWeatherBaseModel

@property (nonatomic, copy) NSString *qlty;

@property (nonatomic, copy) NSString *pm25;

@property (nonatomic, copy) NSString *aqi;

@property (nonatomic, copy) NSString *co;

@property (nonatomic, copy) NSString *no2;

@property (nonatomic, copy) NSString *o3;

@property (nonatomic, copy) NSString *main;

@property (nonatomic, copy) NSString *pm10;

@property (nonatomic, copy) NSString *pub_time;

@property (nonatomic, copy) NSString *so2;

@end

@interface AirNowBaseClassAir_Now_Station : HeWeatherBaseModel

@property (nonatomic, copy) NSString *pub_time;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *no2;

@property (nonatomic, copy) NSString *co;

@property (nonatomic, copy) NSString *asid;

@property (nonatomic, copy) NSString *air_sta;

@property (nonatomic, copy) NSString *aqi;

@property (nonatomic, copy) NSString *main;

@property (nonatomic, copy) NSString *qlty;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *o3;

@property (nonatomic, copy) NSString *pm25;

@property (nonatomic, copy) NSString *so2;

@property (nonatomic, copy) NSString *pm10;

@end

