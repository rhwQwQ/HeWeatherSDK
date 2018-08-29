//
//Created by HEWEATHER on 18/07/27.
//分钟级降雨（邻近预报）

#import "HeWeatherBaseModel.h"

@class WeatherGridMinuteBaseClassGrid_Minute_Forecast,WeatherGridMinuteBaseClassBasic,WeatherGridMinuteBaseClassPcpn_Type,WeatherGridMinuteBaseClassUpdate,WeatherGridMinuteBaseClassPcpn_5M;
@interface WeatherGridMinuteBaseClass : HeWeatherBaseModel

@property (nonatomic, strong) WeatherGridMinuteBaseClassGrid_Minute_Forecast *grid_minute_forecast;

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) WeatherGridMinuteBaseClassBasic *basic;

@property (nonatomic, strong) NSArray<WeatherGridMinuteBaseClassPcpn_5M *> *pcpn_5m;

@property (nonatomic, strong) WeatherGridMinuteBaseClassPcpn_Type *pcpn_type;

@property (nonatomic, strong) WeatherGridMinuteBaseClassUpdate *update;

@end
@interface WeatherGridMinuteBaseClassGrid_Minute_Forecast : HeWeatherBaseModel

@property (nonatomic, copy) NSString *date;

@end

@interface WeatherGridMinuteBaseClassBasic : HeWeatherBaseModel

@property (nonatomic, copy) NSString *admin_area;

@property (nonatomic, copy) NSString *cnty;

@property (nonatomic, copy) NSString *lat;

@property (nonatomic, copy) NSString *lon;

@property (nonatomic, copy) NSString *parent_city;

@property (nonatomic, copy) NSString *tz;

@end

@interface WeatherGridMinuteBaseClassPcpn_Type : HeWeatherBaseModel

@property (nonatomic, copy) NSString *pcpn_type;

@end

@interface WeatherGridMinuteBaseClassUpdate : HeWeatherBaseModel

@property (nonatomic, copy) NSString *loc;

@property (nonatomic, copy) NSString *utc;

@end

@interface WeatherGridMinuteBaseClassPcpn_5M : HeWeatherBaseModel

@property (nonatomic, copy) NSString *pcpn;

@property (nonatomic, copy) NSString *time;

@end

