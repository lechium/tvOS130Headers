/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:41:22 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/GraphVisualizer.framework/GraphVisualizer
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class GVNode, NSMutableArray;

@interface GVEdge : NSObject {

	BOOL reversed;
	GVNode* from;
	GVNode* to;
	NSMutableArray* dummies;

}

@property (nonatomic,retain) NSMutableArray * dummies; 
@property (assign,nonatomic) BOOL reversed; 
@property (nonatomic,readonly) GVNode * from; 
@property (nonatomic,readonly) GVNode * to; 
-(id)description;
-(id)init;
-(void)dealloc;
-(id)initWithFromNode:(id)arg1 to:(id)arg2 ;
-(GVNode *)from;
-(GVNode *)to;
-(NSMutableArray *)dummies;
-(void)setDummies:(NSMutableArray *)arg1 ;
-(BOOL)reversed;
-(void)setReversed:(BOOL)arg1 ;
@end

