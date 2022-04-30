function(slt_add_more_warnings COMPILE_OPTIONS_VAR)
    if(NOT SLT_MORE_WARNINGS)
        return()
    endif()

    slt_process_flag_availability(SLT_WABSTRACT_VTABLE_INIT
        "-Wabstract-vtable-init" "")
    slt_process_flag_availability(SLT_WALLOCA "-Walloca" "")
    slt_process_flag_availability(SLT_WALLOC_ZERO "-Walloc-zero" "")
    slt_process_flag_availability(SLT_WANON_ENUM_ENUM_CONVERSION
        "-Wanon-enum-enum-conversion" "")
    slt_process_flag_availability(SLT_WASSIGN_ENUM "-Wassign-enum" "")
    slt_process_flag_availability(SLT_WAUTO_IMPORT "-Wauto-import" "")
    slt_process_flag_availability(SLT_WBITFIELD_ENUM_CONVERSION
        "-Wbitfield-enum-conversion" "")
    slt_process_flag_availability(SLT_WCOMMA "-Wcomma" "")
    slt_process_flag_availability(SLT_WCOMPLETION_HANDLER
        "-Wcompletion-handler" "")
    slt_process_flag_availability(SLT_WCOMPUOND_TOKEN_SPLIT_BY_SPACE
        "-Wcompound-token-split-by-space" "")
    slt_process_flag_availability(SLT_WCONDITIONAL_UNITIALIZED
        "-Wconditional-uninitialized" "")
    slt_process_flag_availability(SLT_WCUSTOM_ATOMIC_PROPERTIES
        "-Wcustom-atomic-properties" "")
    slt_process_flag_availability(SLT_WDELETE_NON_ABSTRACT_NON_VIRTUAL_DTOR
        "-Wdelete-non-abstract-non-virtual-dtor" "-Wdelete-non-virtual-dtor")
    slt_process_flag_availability(SLT_WDEPRECATED_COPY_WITH_USER_PROVIDED_COPY
        "-Wdeprecated-copy-with-user-provided-copy" "")
    slt_process_flag_availability(SLT_WDEPRECATED_COPY_WITH_USER_PROVIDED_DTOR
        "-Wdeprecated-copy-with-user-provided-dtor" "")
    slt_process_flag_availability(SLT_WDEPRECATED_DYNAMIC_EXCEPTION_SPEC
        "-Wdeprecated-dynamic-exception-spec" "")
    slt_process_flag_availability(SLT_WDEPRECATED_IMPLEMENTATIONS
        "-Wdeprecated-implementations" "")
    slt_process_flag_availability(SLT_WDEPRECATED_THIS_CAPTURE
        "-Wdeprecated-this-capture" "")
    slt_process_flag_availability(SLT_WDIRECT_IVAR_ACCESS
        "-Wdirect-ivar-access" "")
    slt_process_flag_availability(SLT_WDOCUMENTATION "-Wdocumentation" "")
    slt_process_flag_availability(SLT_WDOCUMENTATION_DEPRECATED_SYNC
        "-Wdocumentation-deprecated-sync" "")
    slt_process_flag_availability(SLT_WDOCUMENTATION_HTML
        "-Wdocumentation-html" "")
    slt_process_flag_availability(SLT_WDOCUMENTATION_UNKNOWN_COMMAND
        "-Wdocumentation-unknown-command" "")
    slt_process_flag_availability(SLT_WDOLLAR_IN_IDENTIFIER_EXTENSION
        "-Wdollar-in-identifier-extension" "")
    slt_process_flag_availability(SLT_WDUPLICATE_METHOD_ARG
        "-Wduplicate-method-arg" "")
    slt_process_flag_availability(SLT_WDUPLICATE_METHOD_MATCH
        "-Wduplicate-method-match" "")
    slt_process_flag_availability(SLT_WDUPLICATED_BRANCHES
        "-Wduplicated-branches" "")
    slt_process_flag_availability(SLT_WDUPLICATED_COND "-Wduplicated-cond"
        "")
    slt_process_flag_availability(SLT_WEMBEDDED_DIRECTIVE
        "-Wembedded-directive" "")
    slt_process_flag_availability(SLT_WEMPTY_INIT_STMT "-Wempty-init-stmt"
        "")
    slt_process_flag_availability(SLT_WEXIT_TIME_DESTRUCTORS
        "-Wexit-time-destructors" "")
    slt_process_flag_availability(SLT_WEXPLICIT_OWNERSHIP_TYPE
        "-Wexplicit-ownership-type" "")
    slt_process_flag_availability(SLT_WFIXED_ENUM_EXTENSION
        "-Wfixed-enum-extension" "")
    slt_process_flag_availability(SLT_WFORMAT_OVERFLOW_2
        "-Wformat-overflow=2" "")
    slt_process_flag_availability(SLT_WFORMAT_SIGNEDNESS
        "-Wformat-signedness" "")
    slt_process_flag_availability(SLT_WFORMAT_TYPE_CONFUSION
        "-Wformat-type-confusion" "")
    slt_process_flag_availability(SLT_WFOUR_CHAR_CONSTANTS
        "-Wfour-char-constants" "")
    slt_process_flag_availability(SLT_WGCC_COMPAT "-Wgcc-compat" "")
    slt_process_flag_availability(SLT_WGLOBAL_CONSTRUCTORS
        "-Wglobal-constructors" "")
    slt_process_flag_availability(SLT_WGNU_ANONYMOUS_STRUCT
        "-Wgnu-anonymous-struct" "")
    slt_process_flag_availability(SLT_WGNU_AUTO_TYPE "-Wgnu-auto-type" "")
    slt_process_flag_availability(SLT_WGNU_BINARY_LITERAL
        "-Wgnu-binary-literal" "")
    slt_process_flag_availability(SLT_WGNU_CASE_RANGE "-Wgnu-case-range"
        "")
    slt_process_flag_availability(SLT_WGNU_COMPOUND_LITERAL_INITIALIZER
        "-Wgnu-compound-literal-initializer" "")
    slt_process_flag_availability(SLT_WGNU_CONDITIONAL_OMITTED_OPERAND
        "-Wgnu-conditional-omitted-operand" "")
    slt_process_flag_availability(SLT_WGNU_DESIGNATOR "-Wgnu-designator"
        "")
    slt_process_flag_availability(SLT_WGNU_EMPTY_INITIALIZER
        "-Wgnu-empty-initializer" "")
    slt_process_flag_availability(SLT_WGNU_EMPTY_STRUCT
        "-Wgnu-empty-struct" "")
    slt_process_flag_availability(SLT_WGNU_FLEXIBLE_ARRAY_INITIALIZER
        "-Wgnu-flexible-array-initializer" "")
    slt_process_flag_availability(SLT_WGNU_FLEXIBLE_ARRAY_UNION_MEMBER
        "-Wgnu-flexible-array-union-member" "")
    slt_process_flag_availability(SLT_WGNU_FOLDING_CONSTANT
        "-Wgnu-folding-constant" "")
    slt_process_flag_availability(SLT_WGNU_IMAGINARY_CONSTANT
        "-Wgnu-imaginary-constant" "")
    slt_process_flag_availability(SLT_WGNU_INCLUDE_NEXT
        "-Wgnu-include-next" "")
    slt_process_flag_availability(SLT_WGNU_LABEL_AS_VALUE
        "-Wgnu-label-as-value" "")
    slt_process_flag_availability(SLT_WGNU_REDECLARED_ENUM
        "-Wgnu-redeclared-enum" "")
    slt_process_flag_availability(SLT_WGNU_STATEMENT_EXPRESSION
        "-Wgnu-statement-expression" "")
    slt_process_flag_availability(SLT_WGNU_UNION_CAST "-Wgnu-union-cast"
        "")
    slt_process_flag_availability(SLT_WGNU_ZERO_LINE_DIRECTIVE
        "-Wgnu-zero-line-directive" "")
    slt_process_flag_availability(SLT_WGNU_ZERO_VARIADIC_MACRO_ARGUMENTS
        "-Wgnu-zero-variadic-macro-arguments" "")
    slt_process_flag_availability(SLT_WHEADER_HYGIENE "-Wheader-hygiene" "")
    slt_process_flag_availability(SLT_WIDIOMATIC_PARENTHESES
        "-Widiomatic-parentheses" "")
    slt_process_flag_availability(SLT_WIF_NOT_ALIGNED "-Wif-not-aligned"
        "")
    slt_process_flag_availability(SLT_WIMPLICIT_FALLTHROUGH_5
        "-Wimplicit-fallthrough=5" "-Wimplicit-fallthrough")
    slt_process_flag_availability(
        SLT_WIMPORT_PREPROCESSOR_DIRECTIVE_PEDANTIC
        "-Wimport-preprocessor-directive-pedantic" "")
    slt_process_flag_availability(
        SLT_WINCONSISTENT_MISSING_DESTRUCTOR_OVERRIDE
        "-Winconsistent-missing-destructor-override" "")
    slt_process_flag_availability(SLT_WINFINITE_RECURSION
        "-Winfinite-recursion" "")
    slt_process_flag_availability(SLT_WINT_IN_BOOL_CONTEXT
        "-Wint-in-bool-context" "")
    slt_process_flag_availability(SLT_WINVALID_OR_NONEXISTENT_DIRECTORY
        "-Winvalid-or-nonexistent-directory" "")
    slt_process_flag_availability(SLT_WKEYWORD_MACRO "-Wkeyword-macro" "")
    slt_process_flag_availability(SLT_WLANGUAGE_EXTENSION_TOKEN
        "-Wlanguage-extension-token" "")
    slt_process_flag_availability(SLT_WLOGICAL_OP "-Wlogical-op" "")
    slt_process_flag_availability(SLT_WMAYBE_UNINITIALIZED
        "-Wmaybe-unitialized" "-Wsometimes-uninitialized")
    slt_process_flag_availability(SLT_WMICROSOFT_ANON_TAG
        "-Wmicrosoft-anon-tag" "")
    slt_process_flag_availability(SLT_WMICROSOFT_CHAR_SIZE
        "-Wmicrosoft-char-size" "")
    slt_process_flag_availability(SLT_WMICROSOFT_CHARIZE
        "-Wmicrosoft-charize" "")
    slt_process_flag_availability(SLT_WMICROSOFT_COMMENT_PASTE
        "-Wmicrosoft-comment-paste" "")
    slt_process_flag_availability(SLT_WMICROSOFT_CPP_MACRO
        "-Wmicrosoft-cpp-macro" "")
    slt_process_flag_availability(SLT_WMICROSOFT_ENUM_VALUE
        "-Wmicrosoft-enum-value" "")
    slt_process_flag_availability(SLT_WMICROSOFT_END_OF_FILE
        "-Wmicrosoft-end-of-file" "")
    slt_process_flag_availability(SLT_WMICROSOFT_ENUM_VALUE
        "-Wmicrosoft-enum-value" "")
    slt_process_flag_availability(SLT_WMICROSOFT_FIXED_ENUM
        "-Wmicrosoft-fixed-enum" "")
    slt_process_flag_availability(SLT_WMICROSOFT_FLEXIBLE_ARRAY
        "-Wmicrosoft-flexible-array" "")
    slt_process_flag_availability(SLT_WMICROSOFT_REDECLARE_STATIC
        "-Wmicrosoft-redeclare-static" "")
    slt_process_flag_availability(SLT_WMISMATCHED_TAGS "-Wmismatched-tags" "")
    slt_process_flag_availability(SLT_WMISSING_METHOD_RETURN_TYPE
        "-Wmissing-method-return-type" "")
    slt_process_flag_availability(SLT_WNESTED_ANON_TYPES
        "-Wnested-anon-types" "")
    slt_process_flag_availability(SLT_WNEWLINE_EOF "-Wnewline-eof" "")
    slt_process_flag_availability(SLT_WNONNULL_COMPARE "-Wnonnull-compare"
        "")
    slt_process_flag_availability(SLT_WNONPORTABLE_SYSTEM_INCLUDE_PATH
        "-Wnonportable-system-include-path" "")
    slt_process_flag_availability(SLT_WNOPACKED_BITFIELD_COMPAT
        "-Wnopacked-bitfield-compat" "")
    slt_process_flag_availability(SLT_WNULL_POINTER_ARITHMETIC
        "-Wnull-pointer-arithmetic" "")
    slt_process_flag_availability(SLT_WQUOTED_INCLUDE_IN_FRAMEWORK_HEADER
        "-Wquoted-include-in-framework-header" "")
    slt_process_flag_availability(SLT_WREDUNDANT_MOVE "-Wredundant-move"
        "")
    slt_process_flag_availability(SLT_WREORDER_CTOR "-Wreorder-ctor" "")
    slt_process_flag_availability(SLT_WREORDER "-Wreorder"
        "${SLT_WREORDER_CTOR}")
    slt_process_flag_availability(SLT_WRESERVED_ID_MACRO
        "-Wreserver-id-macro" "")
    slt_process_flag_availability(SLT_WRESERVED_IDENTIFIER
        "-Wreserved-identifier" "${SLT_WRESERVED_ID_MACRO}")
    slt_process_flag_availability(SLT_WSELF_ASSIGN_OVERLOADED
        "-Wself-assign-overloaded" "")
    slt_process_flag_availability(SLT_WSHADOW_FIELD_IN_CONSTRUCTOR_MODIFIED
        "-Wshadow-field-in-constructor-modified" "")
    slt_process_flag_availability(SLT_WSHIFT_OVERFLOW_2
        "-Wshift-overflow=2" "-Wshift-overflow;-Wshift-sign-overflow")
    slt_process_flag_availability(SLT_WSIGNED_ENUM_BITFIELD
        "-Wsigned-enum-bitfield" "")
    slt_process_flag_availability(SLT_WSTRING_CONCATENATION
        "-Wstring-concatenation" "")
    slt_process_flag_availability(SLT_WSTRINGOP_OVERFLOW_4
        "-Wstringop-overflow=4" "")
    # slt_process_flag_availability(SLT_WSTRINGOP_TRUNCATION
    #     "-Wstringop-truncation" "")
    slt_process_flag_availability(SLT_WSUGGEST_ATTRIBUTE_COLD
        "-Wsuggest-attribute=cold" "")
    slt_process_flag_availability(SLT_WSUGGEST_ATTRIBUTE_CONST
        "-Wsuggest-attribute=const" "")
    slt_process_flag_availability(SLT_WSUGGEST_ATTRIBUTE_FORMAT
        "-Wsuggest-attribute=format" "")
    slt_process_flag_availability(SLT_WSUGGEST_ATTRIBUTE_MALLOC
        "-Wsuggest-attribute=malloc" "")
    slt_process_flag_availability(SLT_WSUGGEST_ATTRIBUTE_NORETURN
        "-Wsuggest-attribute=noreturn" "")
    slt_process_flag_availability(SLT_WSUGGEST_ATTRIBUTE_PURE
        "-Wsuggest-attribute=pure" "")
    slt_process_flag_availability(SLT_WSUGGEST_DESTRUCTOR_OVERRIDE
        "-Wsuggest-destructor-override" "")
    slt_process_flag_availability(SLT_WSUPER_CLASS_METHOD_MISMATCH
        "-Wsuper-class-method-mismatch" "")
    slt_process_flag_availability(SLT_WTAUTOLOGICAL_TYPE_LIMIT_COMPARE
        "-Wtautological-type-limit-compare" "")
    slt_process_flag_availability(
        SLT_WTAUTOLOGICAL_UNSIGNED_ENUM_ZERO_COMPARE
        "-Wtautological-unsigned-enum-zero-compare" "")
    slt_process_flag_availability(SLT_WTAUTOLOGICAL_UNSIGNED_ZERO_COMPARE
        "-Wtautological-unsigned-zero-compare" "")
    slt_process_flag_availability(SLT_WTAUTOLOGICAL_VALUE_RANGE_COMPARE
        "-Wtautological-value-range-compare" "")
    slt_process_flag_availability(SLT_WTHREAD_SAFERY_ANALYSIS
        "-Wthread-safery-analysis" "")
    slt_process_flag_availability(SLT_WTHREAD_SAFERY_BETA
        "-Wthread-safery-beta" "")
    slt_process_flag_availability(SLT_WTHREAD_SAFERY_NEGATIVE
        "-Wthread-safery-negative" "")
    slt_process_flag_availability(SLT_WTHREAD_SAFERY_PRECISE
        "-Wthread-safery-precise" "")
    slt_process_flag_availability(SLT_WTHREAD_SAFERY_VERBOSE
        "-Wthread-safery-verbose" "")
    slt_process_flag_availability(SLT_WUNDEF_PREFIX "-Wundef-prefix" "")
    slt_process_flag_availability(SLT_WUNDEFINED_REINTERPRET_CAST
        "-Wundefined-reinterpret-cast" "")
    slt_process_flag_availability(SLT_WUNINITIALIZED_CONST_REFERENCE
        "-Wuninitialized-const-reference" "")
    slt_process_flag_availability(SLT_WUNNEEDED_INTERNAL_DECLARATION
        "-Wunneeded-internal-declaration" "")
    slt_process_flag_availability(SLT_WUNNEEDED_MEMBER_FUNCTION
        "-Wunneeded-member-function" "")
    slt_process_flag_availability(SLT_WUNREACHABLE_CODE_BREAK
        "-Wunreachable-code-break" "")
    slt_process_flag_availability(SLT_WUNREACHABLE_CODE_LOOP_INCREMENT
        "-Wunreachable-code-loop-increment" "")
    slt_process_flag_availability(SLT_WUNREACHABLE_CODE_RETURN
        "-Wunreachable-code-return" "")
    slt_process_flag_availability(SLT_WUNSAFE_LOOP_OPTIMIZATIONS
        "-Wunsafe-loop-optimizations" "")
    slt_process_flag_availability(SLT_WUNSUPPORTED_DLL_BASE_CLASS_TEMPLATE
        "-Wunsupported-dll-base-class-template" "")
    slt_process_flag_availability(SLT_WUNUSED_EXCEPTION_PARAMETER
        "-Wunused-exception-parameter" "")
    slt_process_flag_availability(SLT_WUNUSED_LAMBDA_CAPTURE
        "-Wunused-lambda-capture" "")
    slt_process_flag_availability(SLT_WUNUSED_PRIVATE_FIELD
        "-Wunused-private-field" "")
    slt_process_flag_availability(SLT_WUNUSED_PROPERTY_IVAR
        "-Wunused-property-ivar" "")
    slt_process_flag_availability(SLT_WUNUSED_TEMPLATE "-Wunused-template" "")
    slt_process_flag_availability(SLT_WUSED_BUT_MARKED_UNUSED
        "-Wused-but-marked-unused" "")
    slt_process_flag_availability(SLT_WVECTOR_OPERATION_PERFORMANCE
        "-Wvector-operation-performance" "")
    slt_process_flag_availability(SLT_WWEAK_TEMPLATE_VTABLES
        "-Wweak-template-vtables" "")
    slt_process_flag_availability(SLT_WWEAK_VTABLES "-Wweak-vtables" "")
    slt_process_flag_availability(SLT_WZERO_LENGTH_ARRAY
        "-Wzero-length-array" "")

    unset(SLT_WARNINGS)

    list(APPEND SLT_WARNINGS
        ${SLT_WALLOCA}
        ${SLT_WALLOC_ZERO}
        ${SLT_WANON_ENUM_ENUM_CONVERSION}
        ${SLT_WABSTRACT_VTABLE_INIT}
        ${SLT_WASSIGN_ENUM}
        ${SLT_WAUTO_IMPORT}
        ${SLT_WBITFIELD_ENUM_CONVERSION}
        -Wcast-qual
        ${SLT_WCOMMA}
        ${SLT_WCOMPLETION_HANDLER}
        ${SLT_WCOMPUOND_TOKEN_SPLIT_BY_SPACE}
        ${SLT_WCONDITIONAL_UNITIALIZED}
        -Wctor-dtor-privacy
        ${SLT_WCUSTOM_ATOMIC_PROPERTIES}
        -Wdangling-else
        ${SLT_WDELETE_NON_ABSTRACT_NON_VIRTUAL_DTOR}
        ${SLT_WDEPRECATED_COPY_WITH_USER_PROVIDED_COPY}
        ${SLT_WDEPRECATED_COPY_WITH_USER_PROVIDED_DTOR}
        ${SLT_WDEPRECATED_DYNAMIC_EXCEPTION_SPEC}
        ${SLT_WDEPRECATED_IMPLEMENTATIONS}
        ${SLT_WDEPRECATED_THIS_CAPTURE}
        ${SLT_WDIRECT_IVAR_ACCESS}
        -Wdisabled-optimization
        ${SLT_WDOCUMENTATION}
        ${SLT_WDOCUMENTATION_DEPRECATED_SYNC}
        ${SLT_WDOCUMENTATION_HTML}
        ${SLT_WDOCUMENTATION_UNKNOWN_COMMAND}
        ${SLT_WDOLLAR_IN_IDENTIFIER_EXTENSION}
        ${SLT_WDUPLICATE_METHOD_ARG}
        ${SLT_WDUPLICATE_METHOD_MATCH}
        ${SLT_WDUPLICATED_BRANCHES}
        ${SLT_WDUPLICATED_COND}
        ${SLT_WEMBEDDED_DIRECTIVE}
        ${SLT_WEMPTY_INIT_STMT}
        ${SLT_WEXIT_TIME_DESTRUCTORS}
        ${SLT_WEXPLICIT_OWNERSHIP_TYPE}
        ${SLT_WFIXED_ENUM_EXTENSION}
        -Wformat
        ${SLT_WFORMAT_OVERFLOW_2}
        ${SLT_WFORMAT_SIGNEDNESS}
        ${SLT_WFORMAT_TYPE_CONFUSION}
        -Wformat-y2k
        ${SLT_WFOUR_CHAR_CONSTANTS}
        ${SLT_GCC_COMPAT}
        ${SLT_WGLOBAL_CONSTRUCTORS}
        ${SLT_WGNU_ANONYMOUS_STRUCT}
        ${SLT_WGNU_AUTO_TYPE}
        ${SLT_WGNU_BINARY_LITERAL}
        ${SLT_WGNU_CASE_RANGE}
        ${SLT_WGNU_COMPOUND_LITERAL_INITIALIZER}
        ${SLT_WGNU_CONDITIONAL_OMITTED_OPERAND}
        ${SLT_WGNU_DESIGNATOR}
        ${SLT_WGNU_EMPTY_INITIALIZER}
        ${SLT_WGNU_EMPTY_STRUCT}
        ${SLT_WGNU_FLEXIBLE_ARRAY_INITIALIZER}
        ${SLT_WGNU_FLEXIBLE_ARRAY_UNION_MEMBER}
        ${SLT_WGNU_FOLDING_CONSTANT}
        ${SLT_WGNU_IMAGINARY_CONSTANT}
        ${SLT_WGNU_INCLUDE_NEXT}
        ${SLT_WGNU_LABEL_AS_VALUE}
        ${SLT_WGNU_REDECLARED_ENUM}
        ${SLT_WGNU_STATEMENT_EXPRESSION}
        ${SLT_WGNU_UNION_CAST}
        ${SLT_WGNU_ZERO_LINE_DIRECTIVE}
        ${SLT_WGNU_ZERO_VARIADIC_MACRO_ARGUMENTS}
        ${SLT_WHEADER_HYGIENE}
        ${SLT_WIDIOMATIC_PARENTHESES}
        ${SLT_WIF_NOT_ALIGNED}
        -Wignored-qualifiers
        ${SLT_WINCONSISTENT_MISSING_DESTRUCTOR_OVERRIDE}
        -Winit-self
        -Winvalid-pch
        ${SLT_WIMPLICIT_FALLTHROUGH_5}
        ${SLT_WIMPORT_PREPROCESSOR_DIRECTIVE_PEDANTIC}
        ${SLT_WINFINITE_RECURSION}
        -Winline
        ${SLT_WINT_IN_BOOL_CONTEXT}
        ${SLT_WINVALID_OR_NONEXISTENT_DIRECTORY}
        ${SLT_WKEYWORD_MACRO}
        ${SLT_WLANGUAGE_EXTENSION_TOKEN}
        ${SLT_WLOGICAL_OP}
        -Wmain
        ${SLT_WMAYBE_UNITIALIZED}
        ${SLT_WMICROSOFT_ANON_TAG}
        ${SLT_WMICROSOFT_CHAR_SIZE}
        ${SLT_WMICROSOFT_CHARIZE}
        ${SLT_WMICROSOFT_COMMENT_PASTE}
        ${SLT_WMICROSOFT_CPP_MACRO}
        ${SLT_WMICROSOFT_END_OF_FILE}
        ${SLT_WMICROSOFT_ENUM_VALUE}
        ${SLT_WMICROSOFT_FIXED_ENUM}
        ${SLT_WMICROSOFT_FLEXIBLE_ARRAY}
        ${SLT_WMICROSOFT_REDECLARE_STATIC}
        ${SLT_WMISMATCHED_TAGS}
        -Wmissing-include-dirs
        ${SLT_WMISSING_METHOD_RETURN_TYPE}
        -Wmissing-noreturn
        ${SLT_WNESTED_ANON_TYPESNESTED}
        ${SLT_WNEWLINE_EOF}
        -Wnonnull
        ${SLT_WNONPORTABLE_SYSTEM_INCLUDE_PATH}
        -Wnoexcept
        ${SLT_WNONNULL_COMPARE}
        ${SLT_WNOPACKED_BITFIELD_COMPAT}
        -Wnon-virtual-dtor
        -Wnull-dereference
        ${SLT_WNULL_POINTER_ARITHMETIC}
        -Wold-style-cast
        -Woverlength-strings
        -Woverloaded-virtual
        -Wplacement-new=1
        -Wpointer-arith
        ${SLT_WQUOTED_INCLUDE_IN_FRAMEWORK_HEADER}
        -Wredundant-decls
        ${SLT_WREDUNDANT_MOVE}
        ${SLT_WREORDER}
        ${SLT_WRESERVED_IDENTIFIER}
        ${SLT_WSELF_ASSIGN_OVERLOADED}
        -Wsign-promo
        ${SLT_WSHADOW_FIELD_IN_CONSTRUCTOR_MODIFIED}
        ${SLT_WSHIFT_OVERFLOW_2}
        -Wsign-compare
        ${SLT_WSIGNED_ENUM_BITFIELD}
        -Wstrict-null-sentinel
        -Wstrict-overflow=4
        ${SLT_WSTRING_CONCATENATION}
        ${SLT_WSTRINGOP_OVERFLOW_4}
        ${SLT_WSUGGEST_ATTRIBUTE_COLD}
        ${SLT_WSUGGEST_ATTRIBUTE_CONST}
        ${SLT_WSUGGEST_ATTRIBUTE_FORMAT}
        ${SLT_WSUGGEST_ATTRIBUTE_MALLOC}
        ${SLT_WSUGGEST_ATTRIBUTE_NORETURN}
        ${SLT_WSUGGEST_ATTRIBUTE_PURE}
        ${SLT_WSUGGEST_DESTRUCTOR_OVERRIDE}
        -Wsuggest-final-methods
        -Wsuggest-final-types
        -Wsuggest-override
        ${SLT_WSUPER_CLASS_METHOD_MISMATCH}
        -Wswitch-default
        -Wswitch-enum
        -Wtautological-compare
        ${SLT_WTAUTOLOGICAL_TYPE_LIMIT_COMPARE}
        ${SLT_WTAUTOLOGICAL_UNSIGNED_ENUM_ZERO_COMPARE}
        ${SLT_WTAUTOLOGICAL_UNSIGNED_ZERO_COMPARE}
        ${SLT_WTAUTOLOGICAL_VALUE_RANGE_COMPARE}
        ${SLT_WTHREAD_SAFERY_ANALYSIS}
        ${SLT_WTHREAD_SAFERY_BETA}
        ${SLT_WTHREAD_SAFERY_NEGATIVE}
        ${SLT_WTHREAD_SAFERY_PRECISE}
        ${SLT_WTHREAD_SAFERY_VERBOSE}
        -Wundef
        ${SLT_WUNDEF_PREFIX}
        ${SLT_WUNDEFINED_REINTERPRET_CAST}
        -Wuninitialized
        ${SLT_WUNINITIALIZED_CONST_REFERENCE}
        -Wunknown-pragmas
        ${SLT_WUNNEEDED_INTERNAL_DECLARATION}
        ${SLT_WUNNEEDED_MEMBER_FUNCTION}
        ${SLT_WUNREACHABLE_CODE_BREAK}
        ${SLT_WUNREACHABLE_CODE_LOOP_INCREMENT}
        ${SLT_WUNREACHABLE_CODE_RETURN}
        ${SLT_WUNSAFE_LOOP_OPTIMIZATIONS}
        ${SLT_WUNSUPPORTED_DLL_BASE_CLASS_TEMPLATE}
        -Wunused-but-set-variable
        ${SLT_WUNUSED_EXCEPTION_PARAMETER}
        -Wunused-label
        ${SLT_WUNUSED_LAMBDA_CAPTURE}
        -Wunused-local-typedefs
        ${SLT_WUNUSED_PRIVATE_FIELD}
        ${SLT_WUNUSED_PROPERTY_IVAR}
        ${SLT_WUNUSED_TEMPLATE}
        ${SLT_WUSED_BUT_MARKED_UNUSED}
        -Wuseless-cast
        ${SLT_WVECTOR_OPERATION_PERFORMANCE}
        ${SLT_WWEAK_TEMPLATE_VTABLES}
        ${SLT_WWEAK_VTABLES}
        -Wwrite-strings
        -Wzero-as-null-pointer-constant
        ${SLT_WZERO_LENGTH_ARRAY}
    )
    set(
        ${COMPILE_OPTIONS_VAR}
        "${${SLT_COMPILE_OPTIONS}};${SLT_WARNINGS}"
        PARENT_SCOPE
    )
endfunction()
