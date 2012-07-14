//
//  CalculatorBrain.h
//  Calculator
//
//  Created by Rafael Iga on 7/14/12.
//  Copyright (c) 2012 RubyThree. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface CalculatorBrain : NSObject

- (void)pushOperand:(double)operand;
- (double)performOpeartion:(NSString *)operation;

@end
