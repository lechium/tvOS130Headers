/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:44:26 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SAObjects/SABaseClientBoundCommand.h>

@class SASyncAnchor;

@interface SASyncChunkAccepted : SABaseClientBoundCommand

@property (nonatomic,retain) SASyncAnchor * current; 
+(id)chunkAccepted;
+(id)chunkAcceptedWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SASyncAnchor *)current;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(BOOL)mutatingCommand;
-(void)setCurrent:(SASyncAnchor *)arg1 ;
@end

