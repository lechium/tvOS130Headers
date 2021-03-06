/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:23 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

@class NSTextContainer, NSDictionary;


@protocol NSUITextViewCommonMethods <NSTextLayoutOrientationProvider,NSTextContainerView>
@property (assign,nonatomic,__weak) NSTextContainer * textContainer; 
@property (assign,nonatomic) NSRange markedRange; 
@property (nonatomic,readonly) NSDictionary * markedTextStyle; 
@optional
-(NSRange)markedRange;
-(NSTextContainer *)textContainer;
-(NSDictionary *)markedTextStyle;
-(void)setTextContainer:(id)arg1;
-(void)setMarkedRange:(NSRange)arg1;

@required
-(CGRect*)visibleRect;
-(CGPoint*)textContainerOrigin;
-(void)invalidateTextContainerOrigin;
-(void)setConstrainedFrameSize:(CGSize)arg1;
-(void)setNeedsDisplayInRect:(CGRect)arg1 avoidAdditionalLayout:(BOOL)arg2;
-(UIEdgeInsets*)textContainerInset;
-(CGSize*)minSize;
-(BOOL)isHorizontallyResizable;

@end

