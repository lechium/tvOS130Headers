/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, November 5, 2019 at 2:45:37 AM Mountain Standard Time
* Operating System: Version 13.0 (Build 17J586)
* Image Source: /System/Library/PrivateFrameworks/TextInputUI.framework/TextInputUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <TextInputUI/TextInputUI-Structs.h>
#import <TextInputUI/TUICandidateBaseCell.h>

@class TIKeyboardCandidate, UILabel;

@interface TUICandidateCell : TUICandidateBaseCell {

	BOOL _shouldShowCandidateNumber;
	BOOL _rowSelected;
	TIKeyboardCandidate* _candidate;
	unsigned long long _candidateNumber;
	long long _alignment;
	double _minimumTextLabelHeight;
	UILabel* _textLabel;
	UILabel* _alternativeTextLabel;
	UILabel* _candidateNumberLabel;
	UILabel* _annotationTextLabel;

}

@property (nonatomic,retain) UILabel * textLabel;                             //@synthesize textLabel=_textLabel - In the implementation block
@property (nonatomic,retain) UILabel * alternativeTextLabel;                  //@synthesize alternativeTextLabel=_alternativeTextLabel - In the implementation block
@property (nonatomic,retain) UILabel * candidateNumberLabel;                  //@synthesize candidateNumberLabel=_candidateNumberLabel - In the implementation block
@property (nonatomic,retain) UILabel * annotationTextLabel;                   //@synthesize annotationTextLabel=_annotationTextLabel - In the implementation block
@property (nonatomic,retain) TIKeyboardCandidate * candidate;                 //@synthesize candidate=_candidate - In the implementation block
@property (assign,nonatomic) unsigned long long candidateNumber;              //@synthesize candidateNumber=_candidateNumber - In the implementation block
@property (assign,nonatomic) BOOL shouldShowCandidateNumber;                  //@synthesize shouldShowCandidateNumber=_shouldShowCandidateNumber - In the implementation block
@property (assign,nonatomic) BOOL rowSelected;                                //@synthesize rowSelected=_rowSelected - In the implementation block
@property (assign,nonatomic) long long alignment;                             //@synthesize alignment=_alignment - In the implementation block
@property (assign,nonatomic) double minimumTextLabelHeight;                   //@synthesize minimumTextLabelHeight=_minimumTextLabelHeight - In the implementation block
+(id)reuseIdentifier;
+(double)widthForCandidate:(id)arg1 showCandidateNumber:(BOOL)arg2 style:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setStyle:(id)arg1 ;
-(long long)alignment;
-(void)setAlignment:(long long)arg1 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(UILabel *)textLabel;
-(void)commonInit;
-(TIKeyboardCandidate *)candidate;
-(void)setCandidate:(TIKeyboardCandidate *)arg1 ;
-(BOOL)isFocused;
-(void)layoutSubviews;
-(void)setTextLabel:(UILabel *)arg1 ;
-(void)applyLayoutAttributes:(id)arg1 ;
-(void)updateColors;
-(void)updateLabels;
-(UILabel *)alternativeTextLabel;
-(UILabel *)candidateNumberLabel;
-(UILabel *)annotationTextLabel;
-(void)setCandidateNumber:(unsigned long long)arg1 ;
-(void)setShouldShowCandidateNumber:(BOOL)arg1 ;
-(void)setRowSelected:(BOOL)arg1 ;
-(BOOL)_canFocusProgrammatically;
-(void)updateStyle;
-(unsigned long long)candidateNumber;
-(BOOL)shouldShowCandidateNumber;
-(BOOL)rowSelected;
-(double)minimumTextLabelHeight;
-(void)setMinimumTextLabelHeight:(double)arg1 ;
-(void)setAlternativeTextLabel:(UILabel *)arg1 ;
-(void)setCandidateNumberLabel:(UILabel *)arg1 ;
-(void)setAnnotationTextLabel:(UILabel *)arg1 ;
@end

