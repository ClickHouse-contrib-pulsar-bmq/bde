// s_baltst_rawdataunformatted.cpp      *DO NOT EDIT*      @generated -*-C++-*-

#include <bsls_ident.h>
BSLS_IDENT_RCSID(s_baltst_rawdataunformatted_cpp, "$Id$ $CSID$")

#include <s_baltst_rawdataunformatted.h>

#include <bdlat_formattingmode.h>
#include <bdlat_valuetypefunctions.h>
#include <bdlb_print.h>
#include <bdlb_printmethods.h>
#include <bdlb_string.h>

#include <bsl_vector.h>
#include <bslim_printer.h>
#include <bsls_assert.h>

#include <bsl_cstring.h>
#include <bsl_iomanip.h>
#include <bsl_limits.h>
#include <bsl_ostream.h>
#include <bsl_utility.h>

namespace BloombergLP {
namespace s_baltst {

                          // ------------------------
                          // class RawDataUnformatted
                          // ------------------------

// CONSTANTS

const char RawDataUnformatted::CLASS_NAME[] = "RawDataUnformatted";

const bdlat_AttributeInfo RawDataUnformatted::ATTRIBUTE_INFO_ARRAY[] = {
    {
        ATTRIBUTE_ID_CHARVEC,
        "charvec",
        sizeof("charvec") - 1,
        "",
        bdlat_FormattingMode::e_DEC
    },
    {
        ATTRIBUTE_ID_UCHARVEC,
        "ucharvec",
        sizeof("ucharvec") - 1,
        "",
        bdlat_FormattingMode::e_DEC
    }
};

// CLASS METHODS

const bdlat_AttributeInfo *RawDataUnformatted::lookupAttributeInfo(
        const char *name,
        int         nameLength)
{
    for (int i = 0; i < 2; ++i) {
        const bdlat_AttributeInfo& attributeInfo =
                    RawDataUnformatted::ATTRIBUTE_INFO_ARRAY[i];

        if (nameLength == attributeInfo.d_nameLength
        &&  0 == bsl::memcmp(attributeInfo.d_name_p, name, nameLength))
        {
            return &attributeInfo;
        }
    }

    return 0;
}

const bdlat_AttributeInfo *RawDataUnformatted::lookupAttributeInfo(int id)
{
    switch (id) {
      case ATTRIBUTE_ID_CHARVEC:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_CHARVEC];
      case ATTRIBUTE_ID_UCHARVEC:
        return &ATTRIBUTE_INFO_ARRAY[ATTRIBUTE_INDEX_UCHARVEC];
      default:
        return 0;
    }
}

// CREATORS

RawDataUnformatted::RawDataUnformatted(bslma::Allocator *basicAllocator)
: d_ucharvec(basicAllocator)
, d_charvec(basicAllocator)
{
}

RawDataUnformatted::RawDataUnformatted(const RawDataUnformatted& original,
                                       bslma::Allocator *basicAllocator)
: d_ucharvec(original.d_ucharvec, basicAllocator)
, d_charvec(original.d_charvec, basicAllocator)
{
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
RawDataUnformatted::RawDataUnformatted(RawDataUnformatted&& original) noexcept
: d_ucharvec(bsl::move(original.d_ucharvec))
, d_charvec(bsl::move(original.d_charvec))
{
}

RawDataUnformatted::RawDataUnformatted(RawDataUnformatted&& original,
                                       bslma::Allocator *basicAllocator)
: d_ucharvec(bsl::move(original.d_ucharvec), basicAllocator)
, d_charvec(bsl::move(original.d_charvec), basicAllocator)
{
}
#endif

RawDataUnformatted::~RawDataUnformatted()
{
}

// MANIPULATORS

RawDataUnformatted&
RawDataUnformatted::operator=(const RawDataUnformatted& rhs)
{
    if (this != &rhs) {
        d_charvec = rhs.d_charvec;
        d_ucharvec = rhs.d_ucharvec;
    }

    return *this;
}

#if defined(BSLS_COMPILERFEATURES_SUPPORT_RVALUE_REFERENCES) \
 && defined(BSLS_COMPILERFEATURES_SUPPORT_NOEXCEPT)
RawDataUnformatted&
RawDataUnformatted::operator=(RawDataUnformatted&& rhs)
{
    if (this != &rhs) {
        d_charvec = bsl::move(rhs.d_charvec);
        d_ucharvec = bsl::move(rhs.d_ucharvec);
    }

    return *this;
}
#endif

void RawDataUnformatted::reset()
{
    bdlat_ValueTypeFunctions::reset(&d_charvec);
    bdlat_ValueTypeFunctions::reset(&d_ucharvec);
}

// ACCESSORS

bsl::ostream& RawDataUnformatted::print(
        bsl::ostream& stream,
        int           level,
        int           spacesPerLevel) const
{
    bslim::Printer printer(&stream, level, spacesPerLevel);
    printer.start();
    printer.printAttribute("charvec", this->charvec());
    printer.printAttribute("ucharvec", this->ucharvec());
    printer.end();
    return stream;
}


}  // close package namespace
}  // close enterprise namespace

// GENERATED BY BLP_BAS_CODEGEN_2021.10.31
// USING bas_codegen.pl s_baltst_rawdataunformatted.xsd --mode msg --includedir . --msgComponent rawdataunformatted --noRecurse --noExternalization --noHashSupport --noAggregateConversion
// ----------------------------------------------------------------------------
// NOTICE:
//      Copyright 2021 Bloomberg Finance L.P. All rights reserved.
//      Property of Bloomberg Finance L.P. (BFLP)
//      This software is made available solely pursuant to the
//      terms of a BFLP license agreement which governs its use.
// ------------------------------- END-OF-FILE --------------------------------
