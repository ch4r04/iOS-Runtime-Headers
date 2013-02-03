/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@interface GMMDateTime : PBCodable {
    BOOL _hasTimeZoneOffsetMin;
    long long _secsSinceEpoch;
    int _timeZoneOffsetMin;
}

@property BOOL hasTimeZoneOffsetMin;
@property long long secsSinceEpoch;
@property int timeZoneOffsetMin;

- (void)dealloc;
- (id)description;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasTimeZoneOffsetMin;
- (BOOL)readFrom:(id)arg1;
- (long long)secsSinceEpoch;
- (void)setHasTimeZoneOffsetMin:(BOOL)arg1;
- (void)setSecsSinceEpoch:(long long)arg1;
- (void)setTimeZoneOffsetMin:(int)arg1;
- (int)timeZoneOffsetMin;
- (void)writeTo:(id)arg1;

@end