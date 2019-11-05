/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:46:15 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/NSCopying.h>

@class UIPrintPageRenderer;

@interface UIPrintFormatter : NSObject <NSCopying> {

	BOOL _needsRecalc;
	UIPrintPageRenderer* _printPageRenderer;
	double _maximumContentHeight;
	double _maximumContentWidth;
	long long _startPage;
	long long _pageCount;
	UIEdgeInsets _contentInsets;
	UIEdgeInsets _perPageContentInsets;

}

@property (assign,nonatomic,__weak) UIPrintPageRenderer * printPageRenderer;              //@synthesize printPageRenderer=_printPageRenderer - In the implementation block
@property (assign,nonatomic) double maximumContentHeight;                                 //@synthesize maximumContentHeight=_maximumContentHeight - In the implementation block
@property (assign,nonatomic) double maximumContentWidth;                                  //@synthesize maximumContentWidth=_maximumContentWidth - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                                  //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) UIEdgeInsets perPageContentInsets;                           //@synthesize perPageContentInsets=_perPageContentInsets - In the implementation block
@property (assign,nonatomic) long long startPage;                                         //@synthesize startPage=_startPage - In the implementation block
@property (nonatomic,readonly) long long pageCount;                                       //@synthesize pageCount=_pageCount - In the implementation block
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)init;
-(long long)pageCount;
-(UIEdgeInsets)contentInsets;
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(UIPrintPageRenderer *)printPageRenderer;
-(void)_setNeedsRecalc;
-(long long)startPage;
-(CGRect)_pageContentRect:(BOOL)arg1 ;
-(long long)_recalcPageCount;
-(CGRect)rectForPageAtIndex:(long long)arg1 ;
-(void)drawInRect:(CGRect)arg1 forPageAtIndex:(long long)arg2 ;
-(double)maximumContentWidth;
-(void)setMaximumContentWidth:(double)arg1 ;
-(void)setPrintPageRenderer:(UIPrintPageRenderer *)arg1 ;
-(void)removeFromPrintPageRenderer;
-(void)_recalcIfNecessary;
-(void)setStartPage:(long long)arg1 ;
-(void)setMaximumContentHeight:(double)arg1 ;
-(void)setPerPageContentInsets:(UIEdgeInsets)arg1 ;
-(double)maximumContentHeight;
-(UIEdgeInsets)perPageContentInsets;
@end
