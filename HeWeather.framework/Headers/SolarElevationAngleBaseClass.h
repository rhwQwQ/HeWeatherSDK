//
//Created by HEWEATHER on 18/07/27.
//太阳高度

#import "HeWeatherBaseModel.h"

@class SolarElevationAngleBaseClassSolar_Elevation_Angle;
@interface SolarElevationAngleBaseClass : HeWeatherBaseModel

@property (nonatomic, copy) NSString *status;

@property (nonatomic, strong) SolarElevationAngleBaseClassSolar_Elevation_Angle *solar_elevation_angle;

@end
@interface SolarElevationAngleBaseClassSolar_Elevation_Angle : HeWeatherBaseModel

@property (nonatomic, copy) NSString *hour_angle;

@property (nonatomic, copy) NSString *solar_azimuth_angle;

@property (nonatomic, copy) NSString *solar_elevation_angle;

@property (nonatomic, copy) NSString *solar_hour;

@end

