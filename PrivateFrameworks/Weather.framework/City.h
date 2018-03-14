/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Weather.framework/Weather
 */

@interface City : NSObject {
    NSString * _ISO3166CountryAbbreviation;
    WFGeocodeRequest * _activeGeocodeRequest;
    NSNumber * _airQualityCategory;
    NSNumber * _airQualityIdx;
    bool  _autoUpdate;
    NSTimer * _autoUpdateTimer;
    NSHashTable * _cityUpdateObservers;
    long long  _conditionCode;
    NSArray * _dayForecasts;
    NSURL * _deeplink;
    float  _dewPoint;
    WFTemperature * _feelsLike;
    NSString * _fullName;
    float  _heatIndex;
    NSArray * _hourlyForecasts;
    float  _humidity;
    bool  _isDay;
    bool  _isLocalWeatherCity;
    bool  _isRequestedByFrameworkClient;
    bool  _isUpdating;
    NSError * _lastUpdateError;
    unsigned long long  _lastUpdateStatus;
    NSURL * _link;
    CLLocation * _location;
    bool  _lockedForDemoMode;
    unsigned long long  _moonPhase;
    NSString * _name;
    unsigned long long  _observationTime;
    double  _precipitationPast24Hours;
    float  _pressure;
    unsigned long long  _pressureRising;
    NSString * _state;
    unsigned long long  _sunriseTime;
    unsigned long long  _sunsetTime;
    WFTemperature * _temperature;
    NSTimeZone * _timeZone;
    NSDate * _timeZoneUpdateDate;
    bool  _transient;
    long long  _updateInterval;
    NSDate * _updateTime;
    NSString * _updateTimeString;
    unsigned long long  _uvIndex;
    float  _visibility;
    WFLocation * _wfLocation;
    float  _windChill;
    float  _windDirection;
    float  _windSpeed;
    NSString * _woeid;
}

@property (nonatomic, copy) NSString *ISO3166CountryAbbreviation;
@property (nonatomic, retain) WFGeocodeRequest *activeGeocodeRequest;
@property (nonatomic, retain) NSNumber *airQualityCategory;
@property (nonatomic, retain) NSNumber *airQualityIdx;
@property (nonatomic) bool autoUpdate;
@property (nonatomic, retain) NSTimer *autoUpdateTimer;
@property (nonatomic, retain) NSHashTable *cityUpdateObservers;
@property (nonatomic) long long conditionCode;
@property (nonatomic, copy) NSArray *dayForecasts;
@property (nonatomic, copy) NSURL *deeplink;
@property (nonatomic) float dewPoint;
@property (nonatomic, retain) WFTemperature *feelsLike;
@property (nonatomic, copy) NSString *fullName;
@property (nonatomic) float heatIndex;
@property (nonatomic, copy) NSArray *hourlyForecasts;
@property (nonatomic) float humidity;
@property (nonatomic) bool isDay;
@property (nonatomic) bool isLocalWeatherCity;
@property (nonatomic) bool isRequestedByFrameworkClient;
@property (nonatomic) bool isUpdating;
@property (nonatomic, retain) NSError *lastUpdateError;
@property (nonatomic) unsigned long long lastUpdateStatus;
@property (nonatomic) double latitude;
@property (nonatomic, copy) NSURL *link;
@property (nonatomic, copy) CLLocation *location;
@property (nonatomic, readonly) NSString *locationID;
@property (nonatomic) bool lockedForDemoMode;
@property (nonatomic) double longitude;
@property (nonatomic) unsigned long long moonPhase;
@property (nonatomic, copy) NSString *name;
@property (nonatomic) unsigned long long observationTime;
@property (nonatomic) double precipitationPast24Hours;
@property (nonatomic) float pressure;
@property (nonatomic) unsigned long long pressureRising;
@property (nonatomic, copy) NSString *state;
@property (nonatomic) unsigned long long sunriseTime;
@property (nonatomic) unsigned long long sunsetTime;
@property (nonatomic, retain) WFTemperature *temperature;
@property (nonatomic, retain) NSTimeZone *timeZone;
@property (nonatomic, readonly) bool timeZoneIsFresh;
@property (nonatomic, retain) NSDate *timeZoneUpdateDate;
@property (getter=isTransient, nonatomic) bool transient;
@property (nonatomic) long long updateInterval;
@property (nonatomic, retain) NSDate *updateTime;
@property (nonatomic, copy) NSString *updateTimeString;
@property (readonly) NSDictionary *urlComponents;
@property (setter=setUVIndex:, nonatomic) unsigned long long uvIndex;
@property (nonatomic) float visibility;
@property (nonatomic, retain) WFLocation *wfLocation;
@property (nonatomic) float windChill;
@property (nonatomic) float windDirection;
@property (nonatomic) float windSpeed;
@property (nonatomic, copy) NSString *woeid;

+ (id)_ISO8601Calendar;
+ (id)cityContainingLocation:(id)arg1 expectedName:(id)arg2 fromCities:(id)arg3;

- (void).cxx_destruct;
- (id)ISO3166CountryAbbreviation;
- (void)_clearAutoUpdateTimer;
- (bool)_dataIsValid;
- (void)_generateLocalizableStrings;
- (bool)_isUpdating;
- (void)_notifyDidStartWeatherUpdate;
- (void)_updateTimeZone;
- (id)activeGeocodeRequest;
- (void)addUpdateObserver:(id)arg1;
- (id)airQualityCategory;
- (id)airQualityIdx;
- (bool)autoUpdate;
- (id)autoUpdateTimer;
- (id)cityAndState;
- (void)cityDidFinishUpdatingWithError:(id)arg1;
- (id)cityUpdateObservers;
- (void)clearForecasts;
- (long long)conditionCode;
- (bool)containsLatitude:(double)arg1 longitude:(double)arg2;
- (struct CLLocationCoordinate2D { double x1; double x2; })coordinate;
- (id)dayForecasts;
- (void)dealloc;
- (id)deeplink;
- (id)description;
- (id)detailedDescription;
- (float)dewPoint;
- (id)dictionaryRepresentation;
- (void)discardDataIfNeeded;
- (id)displayName;
- (double)distanceToLatitude:(double)arg1 longitude:(double)arg2;
- (double)distanceToLocation:(id)arg1;
- (id)feelsLike;
- (id)fullName;
- (unsigned long long)hash;
- (float)heatIndex;
- (id)hourlyForecasts;
- (float)humidity;
- (id)init;
- (id)initWithDictionaryRepresentation:(id)arg1;
- (bool)isDay;
- (bool)isDuplicateOfCity:(id)arg1;
- (bool)isEqual:(id)arg1;
- (bool)isLocalWeatherCity;
- (bool)isRequestedByFrameworkClient;
- (bool)isTransient;
- (bool)isUpdating;
- (bool)isUpdatingOrNoData;
- (id)lastUpdateError;
- (unsigned long long)lastUpdateStatus;
- (double)latitude;
- (id)link;
- (void)localWeatherDidBeginUpdate;
- (id)location;
- (id)locationID;
- (long long)locationOfTime:(long long)arg1;
- (bool)lockedForDemoMode;
- (double)longitude;
- (unsigned long long)moonPhase;
- (id)name;
- (id)naturalLanguageDescription;
- (id)naturalLanguageDescriptionWithDescribedCondition:(out long long*)arg1;
- (unsigned long long)observationTime;
- (bool)populateWithDataFromCity:(id)arg1;
- (unsigned long long)precipitationForecast;
- (double)precipitationPast24Hours;
- (float)pressure;
- (unsigned long long)pressureRising;
- (long long)primaryConditionForRange:(struct _NSRange { unsigned long long x1; unsigned long long x2; })arg1;
- (void)removeUpdateObserver:(id)arg1;
- (void)setActiveGeocodeRequest:(id)arg1;
- (void)setAirQualityCategory:(id)arg1;
- (void)setAirQualityIdx:(id)arg1;
- (void)setAutoUpdate:(bool)arg1;
- (void)setAutoUpdateTimer:(id)arg1;
- (void)setCityUpdateObservers:(id)arg1;
- (void)setConditionCode:(long long)arg1;
- (void)setCoordinate:(struct CLLocationCoordinate2D { double x1; double x2; })arg1;
- (void)setDayForecasts:(id)arg1;
- (void)setDeeplink:(id)arg1;
- (void)setDewPoint:(float)arg1;
- (void)setFeelsLike:(id)arg1;
- (void)setFullName:(id)arg1;
- (void)setHeatIndex:(float)arg1;
- (void)setHourlyForecasts:(id)arg1;
- (void)setHumidity:(float)arg1;
- (void)setISO3166CountryAbbreviation:(id)arg1;
- (void)setIsDay:(bool)arg1;
- (void)setIsLocalWeatherCity:(bool)arg1;
- (void)setIsRequestedByFrameworkClient:(bool)arg1;
- (void)setIsUpdating:(bool)arg1;
- (void)setLastUpdateError:(id)arg1;
- (void)setLastUpdateStatus:(unsigned long long)arg1;
- (void)setLatitude:(double)arg1;
- (void)setLink:(id)arg1;
- (void)setLocation:(id)arg1;
- (void)setLockedForDemoMode:(bool)arg1;
- (void)setLongitude:(double)arg1;
- (void)setMoonPhase:(unsigned long long)arg1;
- (void)setName:(id)arg1;
- (void)setObservationTime:(unsigned long long)arg1;
- (void)setPrecipitationPast24Hours:(double)arg1;
- (void)setPressure:(float)arg1;
- (void)setPressureRising:(unsigned long long)arg1;
- (void)setState:(id)arg1;
- (void)setSunriseTime:(unsigned long long)arg1;
- (void)setSunsetTime:(unsigned long long)arg1;
- (void)setTemperature:(id)arg1;
- (void)setTimeZone:(id)arg1;
- (void)setTimeZoneUpdateDate:(id)arg1;
- (void)setTransient:(bool)arg1;
- (void)setUVIndex:(unsigned long long)arg1;
- (void)setUpdateInterval:(long long)arg1;
- (void)setUpdateTime:(id)arg1;
- (void)setUpdateTimeString:(id)arg1;
- (void)setVisibility:(float)arg1;
- (void)setWfLocation:(id)arg1;
- (void)setWindChill:(float)arg1;
- (void)setWindDirection:(float)arg1;
- (void)setWindSpeed:(float)arg1;
- (void)setWoeid:(id)arg1;
- (id)state;
- (unsigned long long)sunriseTime;
- (unsigned long long)sunsetTime;
- (id)temperature;
- (long long)timeDigit;
- (id)timeZone;
- (bool)timeZoneIsFresh;
- (id)timeZoneUpdateDate;
- (bool)update;
- (void)updateCityForModel:(id)arg1;
- (long long)updateInterval;
- (id)updateTime;
- (id)updateTimeString;
- (void)updateTimeZoneWithCompletionBlock:(id /* block */)arg1;
- (id)urlComponents;
- (unsigned long long)uvIndex;
- (float)visibility;
- (unsigned long long)weatherDataAge;
- (id)wfLocation;
- (float)windChill;
- (float)windDirection;
- (id)windDirectionAsString:(double)arg1;
- (float)windSpeed;
- (id)woeid;

@end
