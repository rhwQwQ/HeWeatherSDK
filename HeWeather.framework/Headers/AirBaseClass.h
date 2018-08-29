//
//Created by HEWEATHER on 18/07/27.
//空气质量数据集合
#import "HeWeatherBaseModel.h"

@class AirBaseClassBasic,AirBaseClassAir_Now_City,AirBaseClassUpdate,AirBaseClassAir_Forecast,AirBaseClassAir_Now_Station,AirBaseClassAir_Hourly;
@interface AirBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) AirBaseClassUpdate *update;

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) NSArray<AirBaseClassAir_Now_Station *> *air_now_station;

@property (nonatomic, strong) NSArray<AirBaseClassAir_Hourly *> *air_hourly;

@property (nonatomic, strong) AirBaseClassBasic *basic;

@property (nonatomic, strong) AirBaseClassAir_Now_City *air_now_city;

@property (nonatomic, strong) NSArray<AirBaseClassAir_Forecast *> *air_forecast;

@end
@interface AirBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *location;

@property (nonatomic, copy) NSString *tz;

@property (nonatomic, copy) NSString *cid;

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *cnty;

@end

@interface AirBaseClassAir_Now_City : HeWeatherBaseModel

@property (nonatomic, copy) NSString *qlty;

@property (nonatomic, copy) NSString *pm25;

@property (nonatomic, copy) NSString *aqi;

@property (nonatomic, copy) NSString *no2;

@property (nonatomic, copy) NSString *co;

@property (nonatomic, copy) NSString *pm10;

@property (nonatomic, copy) NSString *main;

@property (nonatomic, copy) NSString *so2;

@property (nonatomic, copy) NSString *o3;

@property (nonatomic, copy) NSString *pub_time;

@end

@interface AirBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface AirBaseClassAir_Forecast : HeWeatherBaseModel

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

@interface AirBaseClassAir_Now_Station : HeWeatherBaseModel

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

@interface AirBaseClassAir_Hourly : HeWeatherBaseModel

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

