/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:42:56 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/PASampling.framework/PASampling
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <PASampling/PASampling-Structs.h>
@class NSMutableDictionary, NSString;

@interface PABinaryLocator : NSObject {

	NSMutableDictionary* _mappings;
	NSString* _buildNumber;
	BOOL _dirty;
	BOOL _enabled;

}

@property (assign) BOOL enabled; 
+(id)sharedBinaryLocator;
-(id)init;
-(BOOL)enabled;
-(void)setEnabled:(BOOL)arg1 ;
-(oneway void)done;
-(id)mappings;
-(BOOL)addURLForCSSymbolOwner:(CSTypeRef)arg1 ;
-(id)urlForUUID:(id)arg1 ;
-(BOOL)removeURLForUUID:(id)arg1 ;
-(id)initSharedBinaryLocator;
-(void)_saveMappings;
-(BOOL)addURL:(id)arg1 ForUUID:(id)arg2 ;
-(void)saveMappings;
@end

