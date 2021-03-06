/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:50:02 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Intents/Intents-Structs.h>
#import <Intents/INJSONSerializable.h>
#import <Intents/NSCopying.h>
#import <Intents/NSSecureCoding.h>

@class NSString, NSArray, INDateComponentsRange;

@interface INMediaSearch : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	long long _mediaType;
	long long _sortOrder;
	NSString* _mediaName;
	NSString* _artistName;
	NSString* _albumName;
	NSArray* _genreNames;
	NSArray* _moodNames;
	INDateComponentsRange* _releaseDate;
	long long _reference;
	NSString* _mediaIdentifier;

}

@property (nonatomic,copy,readonly) NSArray * activityNames; 
@property (nonatomic,readonly) long long mediaType;                                   //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,readonly) long long sortOrder;                                   //@synthesize sortOrder=_sortOrder - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaName;                             //@synthesize mediaName=_mediaName - In the implementation block
@property (nonatomic,copy,readonly) NSString * artistName;                            //@synthesize artistName=_artistName - In the implementation block
@property (nonatomic,copy,readonly) NSString * albumName;                             //@synthesize albumName=_albumName - In the implementation block
@property (nonatomic,copy,readonly) NSArray * genreNames;                             //@synthesize genreNames=_genreNames - In the implementation block
@property (nonatomic,copy,readonly) NSArray * moodNames;                              //@synthesize moodNames=_moodNames - In the implementation block
@property (nonatomic,copy,readonly) INDateComponentsRange * releaseDate;              //@synthesize releaseDate=_releaseDate - In the implementation block
@property (nonatomic,readonly) long long reference;                                   //@synthesize reference=_reference - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaIdentifier;                       //@synthesize mediaIdentifier=_mediaIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)reference;
-(long long)mediaType;
-(long long)sortOrder;
-(id)_dictionaryRepresentation;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)albumName;
-(id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 activityNames:(id)arg8 releaseDate:(id)arg9 reference:(long long)arg10 mediaIdentifier:(id)arg11 ;
-(NSArray *)activityNames;
-(NSString *)artistName;
-(id)initWithMediaType:(long long)arg1 sortOrder:(long long)arg2 mediaName:(id)arg3 artistName:(id)arg4 albumName:(id)arg5 genreNames:(id)arg6 moodNames:(id)arg7 releaseDate:(id)arg8 reference:(long long)arg9 mediaIdentifier:(id)arg10 ;
-(NSString *)mediaName;
-(NSArray *)genreNames;
-(NSArray *)moodNames;
-(INDateComponentsRange *)releaseDate;
-(NSString *)mediaIdentifier;
@end

