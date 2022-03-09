#include <cxxtest/TestSuite.h>
#include "bitmap.h"




class SampleTestSuite : public CxxTest::TestSuite 
{
    public:
    void testOne1( void )

    {
		TS_ASSERT_EQUALS(Sequence(8),88888888);
		TS_TRACE("testOne");

    }

    void testTwo2( void )
    {
		TS_ASSERT_EQUALS(NivenNumber(156),0);
		TS_TRACE("testTwo");
    }


	void testThree3( void )
    {
		unsigned int arrV[]={98,4,33,54,6};
    unsigned int siz = sizeof(arrV)/sizeof(arrV[0]);
		TS_ASSERT_EQUALS(Find3rdSmallestNumber(arrV,siz),33);
		TS_TRACE("testThree");
    }
	
 
	
};