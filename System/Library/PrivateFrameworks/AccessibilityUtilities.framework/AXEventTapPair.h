/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:38:28 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityUtilities.framework/AccessibilityUtilities
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <AccessibilityUtilities/AccessibilityUtilities-Structs.h>
@class NSString;

@interface AXEventTapPair : NSObject {

	int priority;
	int _type;
	/*^block*/id handler;
	NSString* identifier;
	IOHIDEventSystemClientRef _systemClient;
	/*^block*/id _matchingServiceHandler;

}

@property (nonatomic,copy) id handler; 
@property (nonatomic,copy) NSString * identifier; 
@property (assign,nonatomic) int priority; 
@property (assign,nonatomic) int type;                                            //@synthesize type=_type - In the implementation block
@property (nonatomic,retain) IOHIDEventSystemClientRef systemClient;              //@synthesize systemClient=_systemClient - In the implementation block
@property (nonatomic,copy) id matchingServiceHandler;                             //@synthesize matchingServiceHandler=_matchingServiceHandler - In the implementation block
-(id)description;
-(void)dealloc;
-(id)handler;
-(int)type;
-(void)setType:(int)arg1 ;
-(NSString *)identifier;
-(int)priority;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setPriority:(int)arg1 ;
-(void)setHandler:(id)arg1 ;
-(IOHIDEventSystemClientRef)systemClient;
-(void)setSystemClient:(IOHIDEventSystemClientRef)arg1 ;
-(id)matchingServiceHandler;
-(void)setMatchingServiceHandler:(id)arg1 ;
@end

