/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:53 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/NetworkRelay.framework/NetworkRelay
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <NetworkRelay/NetworkRelay-Structs.h>
#import <NetworkRelay/NSCopying.h>

@interface NRLinkPreferences : NSObject <NSCopying> {

	unsigned char _linkType;

}

@property (nonatomic,readonly) unsigned char linkType;              //@synthesize linkType=_linkType - In the implementation block
+(id)createFromEncodedXPCDict:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)description;
-(id)initWithLinkType:(unsigned char)arg1 ;
-(unsigned char)linkType;
-(id)copyShortDescription;
-(BOOL)isNotEmpty;
-(id)copyEncodedXPCDict;
-(id)copyLongDescription;
@end

