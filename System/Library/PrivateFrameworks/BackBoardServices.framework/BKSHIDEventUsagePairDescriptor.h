/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/BackBoardServices.framework/BackBoardServices
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <BackBoardServices/BackBoardServices-Structs.h>
#import <BackBoardServices/BKSHIDEventDescriptor.h>

@interface BKSHIDEventUsagePairDescriptor : BKSHIDEventDescriptor {

	unsigned _page;
	unsigned _usage;

}

@property (readonly) unsigned page;               //@synthesize page=_page - In the implementation block
@property (readonly) unsigned usage;              //@synthesize usage=_usage - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)descriptorForHIDEventType:(unsigned)arg1 page:(unsigned short)arg2 usage:(unsigned short)arg3 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)usage;
-(id)descriptionBuilderWithMultilinePrefix:(id)arg1 ;
-(BOOL)describes:(id)arg1 ;
-(BOOL)matchesHIDEvent:(IOHIDEventRef)arg1 ;
-(id)_initWithPage:(unsigned)arg1 usage:(unsigned)arg2 eventType:(unsigned)arg3 ;
-(BOOL)_page:(unsigned)arg1 usage:(unsigned)arg2 matchesHIDEvent:(IOHIDEventRef)arg3 ;
-(unsigned)page;
@end
