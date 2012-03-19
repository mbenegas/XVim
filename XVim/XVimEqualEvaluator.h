//
//  XVimEqualEvaluator.h
//  XVim
//
//  Created by Shuichiro Suzuki on 3/1/12.
//  Copyright (c) 2012 JugglerShu.Net. All rights reserved.
//

#import "XVimOperatorEvaluator.h"

@interface XVimEqualEvaluator : XVimOperatorEvaluator{
@private
    NSUInteger _repeat;
}
- (id)initWithRepeat:(NSUInteger)repeat;
@end
