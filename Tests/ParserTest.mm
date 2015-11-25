//
//  MapTest.m
//  MapSDK
//
//  Created by Aleck Sun on 9/29/15.
//  Copyright (c) 2015 Aleck Sun. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <XCTest/XCTest.h>
#include "../Source/publicinclude/Document.h"

@interface ParserTest : XCTestCase

@end

@implementation ParserTest

- (void)setUp {
    [super setUp];
    // Put setup code here. This method is called before the invocation of each test method in the class.
}

- (void)tearDown {
    // Put teardown code here. This method is called after the invocation of each test method in the class.
    [super tearDown];
}

- (void)testParser {

    LX::Document* pDoc = LX::createDocumentObject();
    pDoc->loadXml(L"./GSG_corridors.xml");
    
    LX::ILxNode* root = pDoc->generateNodeTree();
    LX::LandXML* land = pDoc->rootObject();
    
    pDoc->releaseDOMDocument();
    
    XCTAssert(true, @"Pass");
}


@end