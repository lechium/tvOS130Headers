/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:39:24 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/CalendarFoundation.framework/CalendarFoundation
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSString, NSMutableArray;

@interface CalLogConfiguration : NSObject {

	NSString* _name;
	NSMutableArray* _nodes;

}

@property (nonatomic,retain) NSString * name;                     //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSMutableArray * nodes;              //@synthesize nodes=_nodes - In the implementation block
-(NSString *)name;
-(id)description;
-(id)init;
-(void)setName:(NSString *)arg1 ;
-(NSMutableArray *)nodes;
-(void)setNodes:(NSMutableArray *)arg1 ;
-(id)initWithSimpleDefinition:(id)arg1 ;
-(void)parseConfigurationDefinition:(id)arg1 ;
-(id)parseNodeDefinition:(id)arg1 ;
-(id)parseWriterDefinition:(id)arg1 ;
-(id)parseFilterDefinition:(id)arg1 ;
-(id)initWithDetailedDefinition:(id)arg1 ;
@end

