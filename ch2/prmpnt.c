/* Emacs: this is -*- C -*- code, */
/* generated 2014-06-30T18:17:56-07 by Liar version 4.118. */

#include "liarc.h"

#define LABEL_1_4 3
#define LABEL_1_6 5
#define LABEL_1_5 7
#define LABEL_1_9 9
#define LABEL_1_8 11
#define LABEL_1_10 13
#define ENVIRONMENT_LABEL_1_3 24
#define DEBUGGING_LABEL_1_2 23
#define OBJECT_1_0 22
#define EXECUTE_CACHE_1_11 15
#define EXECUTE_CACHE_1_7 17
#define FREE_REFERENCE_1_1 20
#define FREE_REFERENCE_1_0 21
#define FREE_REFERENCES_LABEL_1_0 14
#define NUMBER_OF_LINKER_SECTIONS_1_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_1 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_1_4);
      goto screen_frame_3;

    case 1:
      current_block = (Rpc - LABEL_1_6);
      goto label_5;

    case 2:
      current_block = (Rpc - LABEL_1_5);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_1_9);
      goto label_6;

    case 4:
      current_block = (Rpc - LABEL_1_8);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_1_10);
      goto continuation_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (screen_frame_8)
DEFLABEL (screen_frame_3)
  INTERRUPT_CHECK (26, LABEL_1_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_12;
  Wrd8 = Wrd12;

DEFLABEL (label_11)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_1_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_10;
  Wrd9 = Wrd13;

DEFLABEL (label_9)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_1_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_1_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_1_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_1_10);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_1_11]));

DEFLABEL (label_10)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_9])), (Wrd10.pObj));

DEFLABEL (label_6)
  (Wrd9.Obj) = Rvl;
  goto label_9;

DEFLABEL (label_12)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_1_6])), (Wrd9.pObj));

DEFLABEL (label_5)
  (Wrd8.Obj) = Rvl;
  goto label_11;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_2_4 3
#define LABEL_2_5 5
#define LABEL_2_7 7
#define LABEL_2_8 9
#define LABEL_2_9 11
#define LABEL_2_10 13
#define LABEL_2_11 15
#define LABEL_2_12 17
#define LABEL_2_13 19
#define LABEL_2_14 21
#define LABEL_2_16 23
#define LABEL_2_17 25
#define LABEL_2_15 27
#define LABEL_2_19 29
#define ENVIRONMENT_LABEL_2_3 47
#define DEBUGGING_LABEL_2_2 46
#define OBJECT_2_1 45
#define OBJECT_2_0 44
#define EXECUTE_CACHE_2_18 31
#define EXECUTE_CACHE_2_6 33
#define FREE_REFERENCE_2_1 36
#define FREE_REFERENCE_2_0 37
#define FREE_ASSIGNMENT_2_4 39
#define FREE_ASSIGNMENT_2_3 40
#define FREE_ASSIGNMENT_2_2 41
#define FREE_ASSIGNMENT_2_1 42
#define FREE_ASSIGNMENT_2_0 43
#define FREE_REFERENCES_LABEL_2_0 30
#define NUMBER_OF_LINKER_SECTIONS_2_1 3

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_2 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd94;
  machine_word Wrd99;
  machine_word Wrd98;
  machine_word Wrd95;
  machine_word Wrd88;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd89;
  machine_word Wrd87;
  machine_word Wrd86;
  machine_word Wrd81;
  machine_word Wrd80;
  machine_word Wrd72;
  machine_word Wrd67;
  machine_word Wrd68;
  machine_word Wrd70;
  machine_word Wrd71;
  machine_word Wrd69;
  machine_word Wrd57;
  machine_word Wrd58;
  machine_word Wrd63;
  machine_word Wrd62;
  machine_word Wrd59;
  machine_word Wrd54;
  machine_word Wrd53;
  machine_word Wrd45;
  machine_word Wrd40;
  machine_word Wrd41;
  machine_word Wrd43;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd30;
  machine_word Wrd31;
  machine_word Wrd36;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_2_4);
      goto set_painter_resolutionB_5;

    case 1:
      current_block = (Rpc - LABEL_2_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_2_7);
      goto label_7;

    case 3:
      current_block = (Rpc - LABEL_2_8);
      goto label_8;

    case 4:
      current_block = (Rpc - LABEL_2_9);
      goto label_9;

    case 5:
      current_block = (Rpc - LABEL_2_10);
      goto label_10;

    case 6:
      current_block = (Rpc - LABEL_2_11);
      goto label_11;

    case 7:
      current_block = (Rpc - LABEL_2_12);
      goto label_12;

    case 8:
      current_block = (Rpc - LABEL_2_13);
      goto label_13;

    case 9:
      current_block = (Rpc - LABEL_2_14);
      goto label_14;

    case 10:
      current_block = (Rpc - LABEL_2_16);
      goto label_15;

    case 11:
      current_block = (Rpc - LABEL_2_17);
      goto label_16;

    case 12:
      current_block = (Rpc - LABEL_2_15);
      goto continuation_3;

    case 13:
      current_block = (Rpc - LABEL_2_19);
      goto label_17;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (set_painter_resolutionB_19)
DEFLABEL (set_painter_resolutionB_5)
  INTERRUPT_CHECK (26, LABEL_2_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_2_5);
  (Rsp [0]) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_0]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_46;

DEFLABEL (label_45)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_44)
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_1]));
  (Wrd19.Obj) = (Rsp [0]);
  (Wrd26.Obj) = ((Wrd18.pObj) [0]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if ((Wrd27.uLng) == 50)
    goto label_43;

DEFLABEL (label_42)
  ((Wrd18.pObj) [0]) = (Wrd19.Obj);

DEFLABEL (label_41)
  (Wrd32.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd35.Obj) = ((Wrd32.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if ((Wrd36.uLng) == 50)
    goto label_40;
  Wrd31 = Wrd35;

DEFLABEL (label_39)
  Wrd30 = Wrd31;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_38;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  (Wrd43.Lng) = ((Wrd44.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_38;
  (Wrd41.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));

DEFLABEL (label_37)
  (Wrd45.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_2]));
  (Wrd53.Obj) = ((Wrd45.pObj) [0]);
  (Wrd54.uLng) = (OBJECT_TYPE (Wrd53.Obj));
  if ((Wrd54.uLng) == 50)
    goto label_36;

DEFLABEL (label_35)
  ((Wrd45.pObj) [0]) = (Wrd41.Obj);

DEFLABEL (label_34)
  (Wrd59.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd62.Obj) = ((Wrd59.pObj) [0]);
  (Wrd63.uLng) = (OBJECT_TYPE (Wrd62.Obj));
  if ((Wrd63.uLng) == 50)
    goto label_33;
  Wrd58 = Wrd62;

DEFLABEL (label_32)
  Wrd57 = Wrd58;
  (Wrd69.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd69.uLng) == 26))
    goto label_31;
  (Wrd71.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd70.Lng) = ((Wrd71.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd70.Lng)))
    goto label_31;
  (Wrd68.Obj) = (LONG_TO_FIXNUM (Wrd70.Lng));

DEFLABEL (label_30)
  (Wrd72.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_3]));
  (Wrd80.Obj) = ((Wrd72.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if ((Wrd81.uLng) == 50)
    goto label_29;

DEFLABEL (label_28)
  ((Wrd72.pObj) [0]) = (Wrd68.Obj);

DEFLABEL (label_27)
  (Wrd86.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_15]))));
  (* (--Rsp)) = (Wrd86.Obj);
  (Wrd87.Obj) = (current_block [OBJECT_2_0]);
  (* (--Rsp)) = (Wrd87.Obj);
  (Wrd89.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_0]));
  (Wrd92.Obj) = ((Wrd89.pObj) [0]);
  (Wrd93.uLng) = (OBJECT_TYPE (Wrd92.Obj));
  if ((Wrd93.uLng) == 50)
    goto label_26;
  Wrd88 = Wrd92;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd88.Obj);
  (Wrd95.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_2_1]));
  (Wrd98.Obj) = ((Wrd95.pObj) [0]);
  (Wrd99.uLng) = (OBJECT_TYPE (Wrd98.Obj));
  if ((Wrd99.uLng) == 50)
    goto label_24;
  Wrd94 = Wrd98;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd94.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_2_18]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_2_15);
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_ASSIGNMENT_2_4]));
  (Wrd14.Obj) = ((Wrd6.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_22;

DEFLABEL (label_21)
  ((Wrd6.pObj) [0]) = Rvl;

DEFLABEL (label_20)
  Rvl = (current_block [OBJECT_2_1]);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_22)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_21;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_19])), (Wrd6.pObj), Rvl);

DEFLABEL (label_17)
  goto label_20;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_17])), (Wrd95.pObj));

DEFLABEL (label_16)
  (Wrd94.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_16])), (Wrd89.pObj));

DEFLABEL (label_15)
  (Wrd88.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_29)
  if ((Wrd80.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_28;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_14])), (Wrd72.pObj), (Wrd68.Obj));

DEFLABEL (label_14)
  goto label_27;

DEFLABEL (label_31)
  (Wrd67.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_13]))));
  (* (--Rsp)) = (Wrd67.Obj);
  (* (--Rsp)) = (Wrd57.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_13)
  (Wrd68.Obj) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_12])), (Wrd59.pObj));

DEFLABEL (label_12)
  (Wrd58.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_36)
  if ((Wrd53.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_35;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_11])), (Wrd45.pObj), (Wrd41.Obj));

DEFLABEL (label_11)
  goto label_34;

DEFLABEL (label_38)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_2_10]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_10)
  (Wrd41.Obj) = Rvl;
  goto label_37;

DEFLABEL (label_40)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_2_9])), (Wrd32.pObj));

DEFLABEL (label_9)
  (Wrd31.Obj) = Rvl;
  goto label_39;

DEFLABEL (label_43)
  if ((Wrd26.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_42;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_8])), (Wrd18.pObj), (Wrd19.Obj));

DEFLABEL (label_8)
  goto label_41;

DEFLABEL (label_46)
  if ((Wrd14.Obj) == (MAKE_OBJECT (50, 0)))
    goto label_45;
  INVOKE_INTERFACE_3 (29, (& (current_block [LABEL_2_7])), (Wrd6.pObj), Rvl);

DEFLABEL (label_7)
  goto label_44;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_3_4 3
#define LABEL_3_6 5
#define LABEL_3_5 7
#define LABEL_3_9 9
#define LABEL_3_8 11
#define LABEL_3_10 13
#define LABEL_3_11 15
#define LABEL_3_13 17
#define LABEL_3_14 19
#define LABEL_3_15 21
#define LABEL_3_16 23
#define TAG_3_17 10
#define LABEL_3_18 25
#define LABEL_3_20 27
#define LABEL_3_22 29
#define LABEL_3_24 31
#define LABEL_3_26 33
#define LABEL_3_28 35
#define LABEL_3_31 37
#define LABEL_3_30 39
#define LABEL_3_32 41
#define LABEL_3_33 43
#define LABEL_3_36 45
#define LABEL_3_34 47
#define LABEL_3_37 49
#define LABEL_3_39 51
#define LABEL_3_40 53
#define LABEL_3_41 55
#define LABEL_3_38 57
#define LABEL_3_44 59
#define LABEL_3_43 61
#define LABEL_3_47 63
#define LABEL_3_46 65
#define LABEL_3_48 67
#define ENVIRONMENT_LABEL_3_3 109
#define DEBUGGING_LABEL_3_2 108
#define OBJECT_3_9 107
#define OBJECT_3_8 106
#define OBJECT_3_7 105
#define OBJECT_3_6 104
#define OBJECT_3_5 103
#define OBJECT_3_4 102
#define OBJECT_3_3 101
#define OBJECT_3_2 100
#define OBJECT_3_1 99
#define OBJECT_3_0 98
#define EXECUTE_CACHE_3_49 69
#define EXECUTE_CACHE_3_45 71
#define EXECUTE_CACHE_3_42 73
#define EXECUTE_CACHE_3_35 75
#define EXECUTE_CACHE_3_29 77
#define EXECUTE_CACHE_3_27 79
#define EXECUTE_CACHE_3_25 81
#define EXECUTE_CACHE_3_23 83
#define EXECUTE_CACHE_3_21 85
#define EXECUTE_CACHE_3_19 87
#define EXECUTE_CACHE_3_12 89
#define EXECUTE_CACHE_3_7 91
#define FREE_REFERENCE_3_3 94
#define FREE_REFERENCE_3_2 95
#define FREE_REFERENCE_3_1 96
#define FREE_REFERENCE_3_0 97
#define FREE_REFERENCES_LABEL_3_0 68
#define NUMBER_OF_LINKER_SECTIONS_3_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_3 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_3_4);
      goto number__painter_36;

    case 1:
      current_block = (Rpc - LABEL_3_6);
      goto label_38;

    case 2:
      current_block = (Rpc - LABEL_3_5);
      goto continuation_5;

    case 3:
      current_block = (Rpc - LABEL_3_9);
      goto label_39;

    case 4:
      current_block = (Rpc - LABEL_3_8);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_3_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_3_11);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_3_13);
      goto continuation_1;

    case 8:
      current_block = (Rpc - LABEL_3_14);
      goto continuation_0;

    case 9:
      current_block = (Rpc - LABEL_3_15);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_3_16);
      goto lambda_51;

    case 11:
      current_block = (Rpc - LABEL_3_18);
      goto continuation_7;

    case 12:
      current_block = (Rpc - LABEL_3_20);
      goto continuation_8;

    case 13:
      current_block = (Rpc - LABEL_3_22);
      goto continuation_9;

    case 14:
      current_block = (Rpc - LABEL_3_24);
      goto continuation_11;

    case 15:
      current_block = (Rpc - LABEL_3_26);
      goto continuation_10;

    case 16:
      current_block = (Rpc - LABEL_3_28);
      goto continuation_12;

    case 17:
      current_block = (Rpc - LABEL_3_31);
      goto label_40;

    case 18:
      current_block = (Rpc - LABEL_3_30);
      goto continuation_13;

    case 19:
      current_block = (Rpc - LABEL_3_32);
      goto rowloop_29;

    case 20:
      current_block = (Rpc - LABEL_3_33);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_3_36);
      goto continuation_23;

    case 22:
      current_block = (Rpc - LABEL_3_34);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_3_37);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_3_39);
      goto label_42;

    case 25:
      current_block = (Rpc - LABEL_3_40);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_3_41);
      goto label_44;

    case 27:
      current_block = (Rpc - LABEL_3_38);
      goto continuation_22;

    case 28:
      current_block = (Rpc - LABEL_3_44);
      goto label_46;

    case 29:
      current_block = (Rpc - LABEL_3_43);
      goto continuation_19;

    case 30:
      current_block = (Rpc - LABEL_3_47);
      goto label_47;

    case 31:
      current_block = (Rpc - LABEL_3_46);
      goto continuation_24;

    case 32:
      current_block = (Rpc - LABEL_3_48);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (number__painter_50)
DEFLABEL (number__painter_36)
  INTERRUPT_CHECK (26, LABEL_3_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_56;
  Wrd8 = Wrd12;

DEFLABEL (label_55)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_3_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_1]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_54;
  Wrd8 = Wrd12;

DEFLABEL (label_53)
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_3_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_11]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_3_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_3_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_3_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_14]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_3_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_12]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_3_14);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_3]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_3_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_7]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_3_15);
  (Rsp [4]) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd8.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_3_17);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_3_16])));
  Rhp += 5;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd8.pObj)));
  Wrd17 = Wrd8;
  ((Wrd17.pObj) [2]) = Rvl;
  (Wrd16.Obj) = (Rsp [3]);
  ((Wrd17.pObj) [3]) = (Wrd16.Obj);
  (Wrd14.Obj) = (Rsp [2]);
  ((Wrd17.pObj) [4]) = (Wrd14.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  ((Wrd17.pObj) [5]) = (Wrd12.Obj);
  (Wrd10.Obj) = (Rsp [0]);
  ((Wrd17.pObj) [6]) = (Wrd10.Obj);
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_54)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_9])), (Wrd9.pObj));

DEFLABEL (label_39)
  (Wrd8.Obj) = Rvl;
  goto label_53;

DEFLABEL (label_56)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_6])), (Wrd9.pObj));

DEFLABEL (label_38)
  (Wrd8.Obj) = Rvl;
  goto label_55;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_3_16);

DEFLABEL (lambda_34)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_3_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_20]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_3_20);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_22]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_23]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_3_22);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_57;
  Rvl = (current_block [OBJECT_3_4]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_57)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_24]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_25]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_3_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_27]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_3_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_29]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_3_28);
  (Rsp [2]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_30]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_59;
  Wrd9 = Wrd13;

DEFLABEL (label_58)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [5]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_3_30);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto rowloop_29;

DEFLABEL (label_59)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_31])), (Wrd10.pObj));

DEFLABEL (label_40)
  (Wrd9.Obj) = Rvl;
  goto label_58;

DEFLABEL (rowloop_52)
DEFLABEL (rowloop_29)
  INTERRUPT_CHECK (26, LABEL_3_32);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_77;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_77;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd23.Lng) > (Wrd25.Lng)))
    goto label_61;

DEFLABEL (label_60)
  Rvl = (current_block [OBJECT_3_4]);
  Rsp = (& (Rsp [6]));
  goto pop_return;

DEFLABEL (label_61)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_34]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_35]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_3_34);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_3_5]))
    goto label_74;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_36]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_38]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 1))
    goto label_73;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_72)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_71;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_70)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_3]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_69;
  Wrd29 = Wrd33;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_42]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_3_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_43]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_67;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_66)
  (Wrd17.Obj) = (current_block [OBJECT_3_8]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_45]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_3_43);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_46]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_3_2]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_65;
  Wrd10 = Wrd14;

DEFLABEL (label_64)
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd16.Obj) = (Rsp [12]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd18.Obj) = ((Wrd17.pObj) [6]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_3_46);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_63;
  (Wrd11.Obj) = (Rsp [6]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_63;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_63;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd10.pObj) = (& ((Wrd15.pObj) [(Wrd8.Lng)]));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_62)
  (Rsp [2]) = (Wrd6.Obj);
  (Wrd25.Obj) = (Rsp [10]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [3]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_3_49]));

DEFLABEL (label_63)
  (Wrd20.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_48]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_9]), 2);

DEFLABEL (label_48)
  (Wrd6.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_47])), (Wrd11.pObj));

DEFLABEL (label_47)
  (Wrd10.Obj) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_44]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_3_41])), (Wrd30.pObj));

DEFLABEL (label_44)
  (Wrd29.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_40]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_7]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_39]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_3_6]), 1);

DEFLABEL (label_42)
  (Wrd13.Obj) = Rvl;
  goto label_72;

DEFLABEL (label_74)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_76;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_76;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_75)
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  goto rowloop_29;

DEFLABEL (label_76)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_37]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_45)
  (Wrd39.Obj) = Rvl;
  goto label_75;

DEFLABEL (label_77)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_3_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_61;
  goto label_60;

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_3_36);
  goto label_74;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4_4 3
#define LABEL_4_5 5
#define LABEL_4_6 7
#define LABEL_4_7 9
#define ENVIRONMENT_LABEL_4_3 15
#define DEBUGGING_LABEL_4_2 14
#define OBJECT_4_0 13
#define EXECUTE_CACHE_4_8 11
#define FREE_REFERENCES_LABEL_4_0 10
#define NUMBER_OF_LINKER_SECTIONS_4_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_4 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_4_4);
      goto fill_row_with_value_7;

    case 1:
      current_block = (Rpc - LABEL_4_5);
      goto label_9;

    case 2:
      current_block = (Rpc - LABEL_4_6);
      goto fill_loop_5;

    case 3:
      current_block = (Rpc - LABEL_4_7);
      goto continuation_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fill_row_with_value_11)
DEFLABEL (fill_row_with_value_7)
  INTERRUPT_CHECK (26, LABEL_4_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_15;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_15;
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd19.Lng) > (Wrd21.Lng))
    goto label_14;

DEFLABEL (label_13)
  (Wrd15.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto fill_loop_5;

DEFLABEL (label_14)
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_15)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_9)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_13;
  goto label_14;

DEFLABEL (fill_loop_12)
DEFLABEL (fill_loop_5)
  INTERRUPT_CHECK (26, LABEL_4_6);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_16;
  Rvl = (current_block [OBJECT_4_0]);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_16)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4_7]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd14.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_4_8]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_4_7);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto fill_loop_5;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_5_4 3
#define LABEL_5_5 5
#define TAG_5_6 1
#define LABEL_5_7 7
#define TAG_5_8 2
#define LABEL_5_9 9
#define TAG_5_10 3
#define LABEL_5_12 11
#define LABEL_5_13 13
#define LABEL_5_14 15
#define LABEL_5_16 17
#define LABEL_5_17 19
#define LABEL_5_19 21
#define LABEL_5_21 23
#define LABEL_5_22 25
#define LABEL_5_24 27
#define LABEL_5_26 29
#define LABEL_5_27 31
#define LABEL_5_30 33
#define ENVIRONMENT_LABEL_5_3 58
#define DEBUGGING_LABEL_5_2 57
#define EXECUTE_CACHE_5_33 35
#define EXECUTE_CACHE_5_32 37
#define EXECUTE_CACHE_5_31 39
#define EXECUTE_CACHE_5_29 41
#define EXECUTE_CACHE_5_28 43
#define EXECUTE_CACHE_5_25 45
#define EXECUTE_CACHE_5_23 47
#define EXECUTE_CACHE_5_20 49
#define EXECUTE_CACHE_5_18 51
#define EXECUTE_CACHE_5_15 53
#define EXECUTE_CACHE_5_11 55
#define FREE_REFERENCES_LABEL_5_0 34
#define NUMBER_OF_LINKER_SECTIONS_5_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_5 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd6;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_5_4);
      goto segments__painter_16;

    case 1:
      current_block = (Rpc - LABEL_5_5);
      goto lambda_20;

    case 2:
      current_block = (Rpc - LABEL_5_7);
      goto lambda_8;

    case 3:
      current_block = (Rpc - LABEL_5_9);
      goto lambda_22;

    case 4:
      current_block = (Rpc - LABEL_5_12);
      goto continuation_7;

    case 5:
      current_block = (Rpc - LABEL_5_13);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_5_14);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_5_16);
      goto continuation_12;

    case 8:
      current_block = (Rpc - LABEL_5_17);
      goto continuation_11;

    case 9:
      current_block = (Rpc - LABEL_5_19);
      goto continuation_0;

    case 10:
      current_block = (Rpc - LABEL_5_21);
      goto continuation_3;

    case 11:
      current_block = (Rpc - LABEL_5_22);
      goto continuation_2;

    case 12:
      current_block = (Rpc - LABEL_5_24);
      goto continuation_4;

    case 13:
      current_block = (Rpc - LABEL_5_26);
      goto continuation_10;

    case 14:
      current_block = (Rpc - LABEL_5_27);
      goto continuation_9;

    case 15:
      current_block = (Rpc - LABEL_5_30);
      goto continuation_1;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segments__painter_19)
DEFLABEL (segments__painter_16)
  INTERRUPT_CHECK (26, LABEL_5_4);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_6);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_5])));
  Rhp += 1;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd8 = Wrd7;
  (Wrd9.Obj) = (Rsp [0]);
  ((Wrd8.pObj) [2]) = (Wrd9.Obj);
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (lambda_20)
  CLOSURE_HEADER (LABEL_5_5);

DEFLABEL (lambda_15)
  CLOSURE_INTERRUPT_CHECK (24);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd6.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_8);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_7])));
  Rhp += 1;
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd6.pObj)));
  Wrd7 = Wrd6;
  (Wrd8.Obj) = (Rsp [1]);
  ((Wrd7.pObj) [2]) = (Wrd8.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd9.Obj) = ((Wrd11.pObj) [2]);
  (Rsp [2]) = (Wrd9.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd14.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_5_10);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_5_9])));
  Rhp += 1;
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd14.pObj)));
  ((Wrd14.pObj) [2]) = (Wrd5.Obj);
  (Rsp [1]) = (Wrd13.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_11]));

DEFLABEL (lambda_21)
DEFLABEL (lambda_8)
  INTERRUPT_CHECK (26, LABEL_5_7);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_14]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [2]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_5_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_25]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_5_24);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_5_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_21]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_22]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [2]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_23]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_5_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_31]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5_30);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_32]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_5_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_5_12);
  (Rsp [1]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_19]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_20]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_5_19);
  (Rsp [0]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_29]));

DEFLABEL (lambda_22)
  CLOSURE_HEADER (LABEL_5_9);

DEFLABEL (lambda_13)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_17]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_18]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_5_17);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_8;

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_5_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5_27]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_28]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_5_27);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.pObj) = (OBJECT_ADDRESS (Wrd5.Obj));
  (Wrd7.Obj) = ((Wrd6.pObj) [2]);
  (* (--Rsp)) = (Wrd7.Obj);
  goto lambda_8;

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_5_26);
  (Rsp [1]) = Rvl;
  (Wrd6.Obj) = (* (Rsp++));
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_5_33]));

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_6_4 3
#define LABEL_6_5 5
#define LABEL_6_8 7
#define LABEL_6_7 9
#define LABEL_6_9 11
#define LABEL_6_10 13
#define LABEL_6_12 15
#define LABEL_6_13 17
#define LABEL_6_14 19
#define LABEL_6_16 21
#define LABEL_6_18 23
#define LABEL_6_19 25
#define LABEL_6_20 27
#define LABEL_6_23 29
#define LABEL_6_21 31
#define LABEL_6_25 33
#define LABEL_6_28 35
#define LABEL_6_22 37
#define LABEL_6_26 39
#define LABEL_6_30 41
#define LABEL_6_31 43
#define LABEL_6_27 45
#define LABEL_6_32 47
#define LABEL_6_33 49
#define LABEL_6_35 51
#define LABEL_6_34 53
#define LABEL_6_36 55
#define LABEL_6_38 57
#define LABEL_6_39 59
#define LABEL_6_40 61
#define LABEL_6_41 63
#define LABEL_6_42 65
#define LABEL_6_43 67
#define LABEL_6_45 69
#define LABEL_6_44 71
#define LABEL_6_46 73
#define ENVIRONMENT_LABEL_6_3 101
#define DEBUGGING_LABEL_6_2 100
#define OBJECT_6_8 99
#define OBJECT_6_7 98
#define OBJECT_6_6 97
#define OBJECT_6_5 96
#define OBJECT_6_4 95
#define OBJECT_6_3 94
#define OBJECT_6_2 93
#define OBJECT_6_1 92
#define OBJECT_6_0 91
#define EXECUTE_CACHE_6_37 75
#define EXECUTE_CACHE_6_29 77
#define EXECUTE_CACHE_6_24 79
#define EXECUTE_CACHE_6_17 81
#define EXECUTE_CACHE_6_15 83
#define EXECUTE_CACHE_6_11 85
#define EXECUTE_CACHE_6_6 87
#define FREE_REFERENCE_6_0 90
#define FREE_REFERENCES_LABEL_6_0 74
#define NUMBER_OF_LINKER_SECTIONS_6_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_6 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd53;
  machine_word Wrd52;
  machine_word Wrd46;
  machine_word Wrd40;
  machine_word Wrd60;
  machine_word Wrd80;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd84;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd65;
  machine_word Wrd79;
  machine_word Wrd74;
  machine_word Wrd78;
  machine_word Wrd76;
  machine_word Wrd73;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd54;
  machine_word Wrd51;
  machine_word Wrd50;
  machine_word Wrd64;
  machine_word Wrd59;
  machine_word Wrd63;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd57;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd45;
  machine_word Wrd48;
  machine_word Wrd47;
  machine_word Wrd49;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd38;
  machine_word Wrd88;
  machine_word Wrd86;
  machine_word Wrd34;
  machine_word Wrd19;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd14;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd36;
  machine_word Wrd31;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd18;
  machine_word Wrd37;
  machine_word Wrd15;
  machine_word Wrd10;
  machine_word Wrd41;
  machine_word Wrd39;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd11;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_6_4);
      goto draw_line_on_screen_70;

    case 1:
      current_block = (Rpc - LABEL_6_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_6_8);
      goto label_72;

    case 3:
      current_block = (Rpc - LABEL_6_7);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_6_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_6_10);
      goto continuation_2;

    case 6:
      current_block = (Rpc - LABEL_6_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_6_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_6_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_6_16);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_6_18);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_6_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_6_20);
      goto label_73;

    case 13:
      current_block = (Rpc - LABEL_6_23);
      goto label_74;

    case 14:
      current_block = (Rpc - LABEL_6_21);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_6_25);
      goto label_75;

    case 16:
      current_block = (Rpc - LABEL_6_28);
      goto label_76;

    case 17:
      current_block = (Rpc - LABEL_6_22);
      goto continuation_13;

    case 18:
      current_block = (Rpc - LABEL_6_26);
      goto continuation_19;

    case 19:
      current_block = (Rpc - LABEL_6_30);
      goto label_77;

    case 20:
      current_block = (Rpc - LABEL_6_31);
      goto label_78;

    case 21:
      current_block = (Rpc - LABEL_6_27);
      goto continuation_18;

    case 22:
      current_block = (Rpc - LABEL_6_32);
      goto continuation_22;

    case 23:
      current_block = (Rpc - LABEL_6_33);
      goto continuation_23;

    case 24:
      current_block = (Rpc - LABEL_6_35);
      goto label_79;

    case 25:
      current_block = (Rpc - LABEL_6_34);
      goto continuation_24;

    case 26:
      current_block = (Rpc - LABEL_6_36);
      goto continuation_25;

    case 27:
      current_block = (Rpc - LABEL_6_38);
      goto label_80;

    case 28:
      current_block = (Rpc - LABEL_6_39);
      goto label_81;

    case 29:
      current_block = (Rpc - LABEL_6_40);
      goto label_82;

    case 30:
      current_block = (Rpc - LABEL_6_41);
      goto label_83;

    case 31:
      current_block = (Rpc - LABEL_6_42);
      goto label_84;

    case 32:
      current_block = (Rpc - LABEL_6_43);
      goto loop_38;

    case 33:
      current_block = (Rpc - LABEL_6_45);
      goto loop_52;

    case 34:
      current_block = (Rpc - LABEL_6_44);
      goto continuation_36;

    case 35:
      current_block = (Rpc - LABEL_6_46);
      goto continuation_50;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (draw_line_on_screen_86)
DEFLABEL (draw_line_on_screen_70)
  INTERRUPT_CHECK (26, LABEL_6_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_121;
  Wrd8 = Wrd12;

DEFLABEL (label_120)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_9]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (current_block [OBJECT_6_1]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_10]))));
  (* (--Rsp)) = (Wrd20.Obj);
  (Wrd21.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd21.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_6_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_6_9);
  (* (--Rsp)) = Rvl;
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_6_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_6_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_6_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_6_13);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_6_4]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_6_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_6_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_6_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_15]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_6_18);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_17]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_6_19);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_119;
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_119;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd39.Lng) < (Wrd41.Lng))
    goto label_90;

DEFLABEL (label_91)
  (Wrd15.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_89;

DEFLABEL (label_90)
  (Wrd37.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_89)
DEFLABEL (label_118)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_21]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_22]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [6]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_117;
  (Wrd29.Obj) = (Rsp [4]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_117;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd33.Lng) - (Wrd35.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_117;
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_116)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_6_22);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_6_21);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_115;
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_115;
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd39.Lng) < (Wrd41.Lng))
    goto label_93;

DEFLABEL (label_94)
  (Wrd15.Obj) = (current_block [OBJECT_6_5]);
  (* (--Rsp)) = (Wrd15.Obj);
  goto label_92;

DEFLABEL (label_93)
  (Wrd37.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd37.Obj);

DEFLABEL (label_92)
DEFLABEL (label_114)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_26]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_27]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd27.Obj) = (Rsp [7]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_113;
  (Wrd29.Obj) = (Rsp [5]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if (! ((Wrd30.uLng) == 26))
    goto label_113;
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd29.Obj));
  (Wrd31.Lng) = ((Wrd33.Lng) - (Wrd35.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd31.Lng)))
    goto label_113;
  (Wrd36.Obj) = (LONG_TO_FIXNUM (Wrd31.Lng));
  (* (--Rsp)) = (Wrd36.Obj);

DEFLABEL (label_112)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_24]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_6_27);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_6_26);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_111;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if (multiply_with_overflow ((Wrd14.Lng), 2, (& (Wrd12.Lng))))
    goto label_111;
  (Wrd17.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));
  (* (--Rsp)) = (Wrd17.Obj);

DEFLABEL (label_110)
  (Wrd23.Obj) = (Rsp [1]);
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd23.Obj));
  if (! ((Wrd24.uLng) == 26))
    goto label_109;
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd23.Obj));
  if (multiply_with_overflow ((Wrd27.Lng), 2, (& (Wrd25.Lng))))
    goto label_109;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd25.Lng));
  (* (--Rsp)) = (Wrd30.Obj);

DEFLABEL (label_108)
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_32]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (Wrd34.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd34.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_6_32);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_29]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_6_33);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd16.pObj) = (& (Rhp [-1]));
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd16.pObj)));
  (Rsp [0]) = (Wrd17.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd9.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_6_0]));
  (Wrd12.Obj) = ((Wrd9.pObj) [0]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if ((Wrd13.uLng) == 50)
    goto label_107;
  Wrd8 = Wrd12;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [14]);
  (* (--Rsp)) = (Wrd14.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_6_34);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd11.pObj) = (OBJECT_ADDRESS (Wrd10.Obj));
  (Wrd12.Obj) = ((Wrd11.pObj) [0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [5]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_37]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_6_36);
  (Wrd5.Obj) = (Rsp [6]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_105;
  (Wrd7.Obj) = (Rsp [4]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_105;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd86.Lng) > (Wrd88.Lng))
    goto label_100;

DEFLABEL (label_99)
  (Wrd20.Obj) = (Rsp [3]);
  (Wrd21.uLng) = (OBJECT_TYPE (Wrd20.Obj));
  if (! ((Wrd21.uLng) == 26))
    goto label_98;
  (Wrd22.Obj) = (Rsp [4]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if (! ((Wrd23.uLng) == 26))
    goto label_98;
  (Wrd26.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd22.Obj));
  (Wrd24.Lng) = ((Wrd26.Lng) - (Wrd28.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd24.Lng)))
    goto label_98;
  (Wrd29.Obj) = (LONG_TO_FIXNUM (Wrd24.Lng));
  (* (--Rsp)) = (Wrd29.Obj);

DEFLABEL (label_97)
  (Wrd35.Obj) = (Rsp [4]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_96;
  (Wrd37.Obj) = (Rsp [3]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_96;
  (Wrd41.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd41.Lng) - (Wrd43.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_96;
  (Wrd44.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));
  (* (--Rsp)) = (Wrd44.Obj);

DEFLABEL (label_95)
  (Wrd49.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd49.Obj);
  (Wrd47.pObj) = (& (Rhp [-1]));
  (Wrd48.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd47.pObj)));
  (Rsp [1]) = (Wrd48.Obj);
  (Wrd45.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd45.Obj);
  goto loop_38;

DEFLABEL (label_96)
  (Wrd30.Obj) = (Rsp [4]);
  (Wrd31.Obj) = (Rsp [3]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_40]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_82)
  (* (--Rsp)) = Rvl;
  goto label_95;

DEFLABEL (label_98)
  (Wrd15.Obj) = (Rsp [3]);
  (Wrd16.Obj) = (Rsp [4]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_39]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_81)
  (* (--Rsp)) = Rvl;
  goto label_97;

DEFLABEL (label_100)
  (Wrd55.Obj) = (Rsp [2]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_104;
  (Wrd57.Obj) = (Rsp [6]);
  (Wrd58.uLng) = (OBJECT_TYPE (Wrd57.Obj));
  if (! ((Wrd58.uLng) == 26))
    goto label_104;
  (Wrd61.Lng) = (FIXNUM_TO_LONG (Wrd55.Obj));
  (Wrd63.Lng) = (FIXNUM_TO_LONG (Wrd57.Obj));
  (Wrd59.Lng) = ((Wrd61.Lng) - (Wrd63.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd59.Lng)))
    goto label_104;
  (Wrd64.Obj) = (LONG_TO_FIXNUM (Wrd59.Lng));
  (* (--Rsp)) = (Wrd64.Obj);

DEFLABEL (label_103)
  (Wrd70.Obj) = (Rsp [3]);
  (Wrd71.uLng) = (OBJECT_TYPE (Wrd70.Obj));
  if (! ((Wrd71.uLng) == 26))
    goto label_102;
  (Wrd72.Obj) = (Rsp [4]);
  (Wrd73.uLng) = (OBJECT_TYPE (Wrd72.Obj));
  if (! ((Wrd73.uLng) == 26))
    goto label_102;
  (Wrd76.Lng) = (FIXNUM_TO_LONG (Wrd70.Obj));
  (Wrd78.Lng) = (FIXNUM_TO_LONG (Wrd72.Obj));
  (Wrd74.Lng) = ((Wrd76.Lng) - (Wrd78.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd74.Lng)))
    goto label_102;
  (Wrd79.Obj) = (LONG_TO_FIXNUM (Wrd74.Lng));
  (* (--Rsp)) = (Wrd79.Obj);

DEFLABEL (label_101)
  (Wrd84.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd84.Obj);
  (Wrd82.pObj) = (& (Rhp [-1]));
  (Wrd83.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd82.pObj)));
  (Rsp [1]) = (Wrd83.Obj);
  (Wrd80.Obj) = (current_block [OBJECT_6_6]);
  (* (--Rsp)) = (Wrd80.Obj);
  goto loop_52;

DEFLABEL (label_102)
  (Wrd65.Obj) = (Rsp [3]);
  (Wrd66.Obj) = (Rsp [4]);
  (Wrd69.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_42]))));
  (* (--Rsp)) = (Wrd69.Obj);
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd65.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_84)
  (* (--Rsp)) = Rvl;
  goto label_101;

DEFLABEL (label_104)
  (Wrd50.Obj) = (Rsp [2]);
  (Wrd51.Obj) = (Rsp [6]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_41]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd50.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_83)
  (* (--Rsp)) = Rvl;
  goto label_103;

DEFLABEL (label_105)
  (Wrd9.Obj) = (Rsp [6]);
  (Wrd10.Obj) = (Rsp [4]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_38]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_80)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_99;
  goto label_100;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_35])), (Wrd9.pObj));

DEFLABEL (label_79)
  (Wrd8.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  (Wrd18.Obj) = (Rsp [1]);
  (Wrd19.Obj) = (current_block [OBJECT_6_7]);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_31]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_78)
  (* (--Rsp)) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (current_block [OBJECT_6_7]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_77)
  (* (--Rsp)) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  (Wrd22.Obj) = (Rsp [7]);
  (Wrd23.Obj) = (Rsp [5]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_28]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_76)
  (* (--Rsp)) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_25]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_75)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_94;
  goto label_93;

DEFLABEL (label_117)
  (Wrd22.Obj) = (Rsp [6]);
  (Wrd23.Obj) = (Rsp [4]);
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_23]))));
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd22.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_74)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_20]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_73)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_91;
  goto label_90;

DEFLABEL (label_121)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_6_8])), (Wrd9.pObj));

DEFLABEL (label_72)
  (Wrd8.Obj) = Rvl;
  goto label_120;

DEFLABEL (loop_87)
DEFLABEL (loop_38)
  INTERRUPT_CHECK (26, LABEL_6_43);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [7]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_122;
  Rvl = (current_block [OBJECT_6_8]);
  Rsp = (& (Rsp [20]));
  goto pop_return;

DEFLABEL (label_122)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd12.Lng) < 0)
    goto label_124;
  (Wrd14.Obj) = (Rsp [4]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Obj) = (Rsp [10]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd17.Lng) + (Wrd19.Lng));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  ((Wrd15.pObj) [0]) = (Wrd13.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd12.Lng) + (Wrd29.Lng));
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  ((Wrd10.pObj) [0]) = (Wrd23.Obj);
  goto label_123;

DEFLABEL (label_124)
  (Wrd59.Obj) = (Rsp [6]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd61.Lng) = ((Wrd12.Lng) + (Wrd60.Lng));
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));
  ((Wrd10.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_123)
DEFLABEL (label_125)
  (Wrd34.Obj) = (Rsp [3]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Obj) = (Rsp [8]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd37.Lng) + (Wrd39.Lng));
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  ((Wrd35.pObj) [0]) = (Wrd33.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_44]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd50.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd51.Obj) = (Rsp [8]);
  (Wrd52.pObj) = (OBJECT_ADDRESS (Wrd51.Obj));
  (Wrd53.Obj) = ((Wrd52.pObj) [0]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_37]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_6_44);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_38;

DEFLABEL (loop_88)
DEFLABEL (loop_52)
  INTERRUPT_CHECK (26, LABEL_6_45);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [9]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_126;
  Rvl = (current_block [OBJECT_6_8]);
  Rsp = (& (Rsp [20]));
  goto pop_return;

DEFLABEL (label_126)
  (Wrd9.Obj) = (Rsp [2]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [0]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd12.Lng) < 0)
    goto label_128;
  (Wrd14.Obj) = (Rsp [3]);
  (Wrd15.pObj) = (OBJECT_ADDRESS (Wrd14.Obj));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Obj) = (Rsp [8]);
  (Wrd19.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd17.Lng) + (Wrd19.Lng));
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  ((Wrd15.pObj) [0]) = (Wrd13.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  (Wrd30.Lng) = ((Wrd12.Lng) + (Wrd29.Lng));
  (Wrd23.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));
  ((Wrd10.pObj) [0]) = (Wrd23.Obj);
  goto label_127;

DEFLABEL (label_128)
  (Wrd59.Obj) = (Rsp [5]);
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd59.Obj));
  (Wrd61.Lng) = ((Wrd12.Lng) + (Wrd60.Lng));
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd61.Lng));
  ((Wrd10.pObj) [0]) = (Wrd54.Obj);

DEFLABEL (label_127)
DEFLABEL (label_129)
  (Wrd34.Obj) = (Rsp [4]);
  (Wrd35.pObj) = (OBJECT_ADDRESS (Wrd34.Obj));
  (Wrd36.Obj) = ((Wrd35.pObj) [0]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Obj) = (Rsp [10]);
  (Wrd39.Lng) = (FIXNUM_TO_LONG (Wrd38.Obj));
  (Wrd40.Lng) = ((Wrd37.Lng) + (Wrd39.Lng));
  (Wrd33.Obj) = (LONG_TO_FIXNUM (Wrd40.Lng));
  ((Wrd35.pObj) [0]) = (Wrd33.Obj);
  (Wrd45.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6_46]))));
  (* (--Rsp)) = (Wrd45.Obj);
  (Wrd46.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd46.Obj);
  (Wrd47.Obj) = (Rsp [18]);
  (* (--Rsp)) = (Wrd47.Obj);
  (Wrd48.Obj) = (Rsp [6]);
  (Wrd49.pObj) = (OBJECT_ADDRESS (Wrd48.Obj));
  (Wrd50.Obj) = ((Wrd49.pObj) [0]);
  (* (--Rsp)) = (Wrd50.Obj);
  (Wrd53.Obj) = ((Wrd35.pObj) [0]);
  (* (--Rsp)) = (Wrd53.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_6_37]));

DEFLABEL (continuation_50)
  INTERRUPT_CHECK (27, LABEL_6_46);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.Lng) = (FIXNUM_TO_LONG (Wrd6.Obj));
  (Wrd8.Lng) = ((Wrd7.Lng) + 1L);
  (Wrd5.Obj) = (LONG_TO_FIXNUM (Wrd8.Lng));
  (Rsp [0]) = (Wrd5.Obj);
  goto loop_52;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_7_4 3
#define LABEL_7_5 5
#define LABEL_7_6 7
#define LABEL_7_7 9
#define ENVIRONMENT_LABEL_7_3 19
#define DEBUGGING_LABEL_7_2 18
#define OBJECT_7_1 17
#define OBJECT_7_0 16
#define EXECUTE_CACHE_7_8 11
#define FREE_REFERENCE_7_1 14
#define FREE_REFERENCE_7_0 15
#define FREE_REFERENCES_LABEL_7_0 10
#define NUMBER_OF_LINKER_SECTIONS_7_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_7 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd46;
  machine_word Wrd45;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd36;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_7_4);
      goto plot_if_on_screen_5;

    case 1:
      current_block = (Rpc - LABEL_7_5);
      goto label_7;

    case 2:
      current_block = (Rpc - LABEL_7_6);
      goto label_8;

    case 3:
      current_block = (Rpc - LABEL_7_7);
      goto label_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (plot_if_on_screen_11)
DEFLABEL (plot_if_on_screen_5)
  INTERRUPT_CHECK (26, LABEL_7_4);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if (! ((Wrd6.Lng) < 0))
    goto label_13;

DEFLABEL (label_12)
  Rvl = (current_block [OBJECT_7_0]);
  Rsp = (& (Rsp [4]));
  goto pop_return;

DEFLABEL (label_13)
  (Wrd7.Obj) = (Rsp [1]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd8.Lng) < 0)
    goto label_12;
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_19;
  Wrd10 = Wrd14;

DEFLABEL (label_18)
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  if ((Wrd17.Lng) > (Wrd18.Lng))
    goto label_12;
  (Wrd21.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_7_1]));
  (Wrd24.Obj) = ((Wrd21.pObj) [0]);
  (Wrd25.uLng) = (OBJECT_TYPE (Wrd24.Obj));
  if ((Wrd25.uLng) == 50)
    goto label_17;
  Wrd20 = Wrd24;

DEFLABEL (label_16)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd27.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd28.Lng) = (FIXNUM_TO_LONG (Wrd20.Obj));
  if ((Wrd27.Lng) > (Wrd28.Lng))
    goto label_12;
  (Wrd43.Obj) = (Rsp [2]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 10))
    goto label_15;
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_15;
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd41.Obj) = ((Wrd40.pObj) [0]);
  (Wrd42.Lng) = (FIXNUM_TO_LONG (Wrd41.Obj));
  if (! (((unsigned long) (Wrd27.Lng)) < ((unsigned long) (Wrd42.Lng))))
    goto label_15;
  (Wrd31.uLng) = (OBJECT_DATUM (Wrd26.Obj));
  (Wrd34.pObj) = (& ((Wrd40.pObj) [(Wrd31.Lng)]));
  (Wrd29.Obj) = ((Wrd34.pObj) [1]);

DEFLABEL (label_14)
  (Rsp [1]) = (Wrd29.Obj);
  (Wrd50.Obj) = (Rsp [0]);
  (Rsp [2]) = (Wrd50.Obj);
  Rsp = (& (Rsp [1]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7_8]));

DEFLABEL (label_15)
  (Wrd45.Obj) = (Rsp [2]);
  (Wrd46.Obj) = (Rsp [1]);
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_7_7]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd46.Obj);
  (* (--Rsp)) = (Wrd45.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_7_1]), 2);

DEFLABEL (label_9)
  (Wrd29.Obj) = Rvl;
  goto label_14;

DEFLABEL (label_17)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_6])), (Wrd21.pObj));

DEFLABEL (label_8)
  (Wrd20.Obj) = Rvl;
  goto label_16;

DEFLABEL (label_19)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_7_5])), (Wrd11.pObj));

DEFLABEL (label_7)
  (Wrd10.Obj) = Rvl;
  goto label_18;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_8_4 3
#define LABEL_8_7 5
#define LABEL_8_5 7
#define LABEL_8_9 9
#define LABEL_8_10 11
#define LABEL_8_12 13
#define LABEL_8_13 15
#define LABEL_8_14 17
#define TAG_8_15 7
#define LABEL_8_16 19
#define LABEL_8_18 21
#define LABEL_8_20 23
#define LABEL_8_22 25
#define LABEL_8_24 27
#define LABEL_8_26 29
#define LABEL_8_28 31
#define LABEL_8_30 33
#define LABEL_8_32 35
#define LABEL_8_35 37
#define LABEL_8_34 39
#define LABEL_8_36 41
#define LABEL_8_37 43
#define LABEL_8_40 45
#define LABEL_8_38 47
#define LABEL_8_41 49
#define LABEL_8_43 51
#define LABEL_8_44 53
#define LABEL_8_45 55
#define LABEL_8_42 57
#define LABEL_8_48 59
#define LABEL_8_47 61
#define LABEL_8_51 63
#define LABEL_8_50 65
#define LABEL_8_52 67
#define ENVIRONMENT_LABEL_8_3 117
#define DEBUGGING_LABEL_8_2 116
#define OBJECT_8_11 115
#define OBJECT_8_10 114
#define OBJECT_8_9 113
#define OBJECT_8_8 112
#define OBJECT_8_7 111
#define OBJECT_8_6 110
#define OBJECT_8_5 109
#define OBJECT_8_4 108
#define OBJECT_8_3 107
#define OBJECT_8_2 106
#define OBJECT_8_1 105
#define OBJECT_8_0 104
#define EXECUTE_CACHE_8_53 69
#define EXECUTE_CACHE_8_49 71
#define EXECUTE_CACHE_8_46 73
#define EXECUTE_CACHE_8_39 75
#define EXECUTE_CACHE_8_33 77
#define EXECUTE_CACHE_8_31 79
#define EXECUTE_CACHE_8_29 81
#define EXECUTE_CACHE_8_27 83
#define EXECUTE_CACHE_8_25 85
#define EXECUTE_CACHE_8_23 87
#define EXECUTE_CACHE_8_21 89
#define EXECUTE_CACHE_8_19 91
#define EXECUTE_CACHE_8_17 93
#define EXECUTE_CACHE_8_11 95
#define EXECUTE_CACHE_8_8 97
#define EXECUTE_CACHE_8_6 99
#define FREE_REFERENCE_8_1 102
#define FREE_REFERENCE_8_0 103
#define FREE_REFERENCES_LABEL_8_0 68
#define NUMBER_OF_LINKER_SECTIONS_8_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_8 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd22;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd23;
  machine_word Wrd5;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd6;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_8_4);
      goto procedure__painter_38;

    case 1:
      current_block = (Rpc - LABEL_8_7);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_8_5);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8_9);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_8_10);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_8_12);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_8_13);
      goto continuation_2;

    case 7:
      current_block = (Rpc - LABEL_8_14);
      goto lambda_51;

    case 8:
      current_block = (Rpc - LABEL_8_16);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_8_18);
      goto continuation_7;

    case 10:
      current_block = (Rpc - LABEL_8_20);
      goto continuation_8;

    case 11:
      current_block = (Rpc - LABEL_8_22);
      goto continuation_13;

    case 12:
      current_block = (Rpc - LABEL_8_24);
      goto continuation_12;

    case 13:
      current_block = (Rpc - LABEL_8_26);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_8_28);
      goto continuation_10;

    case 15:
      current_block = (Rpc - LABEL_8_30);
      goto continuation_9;

    case 16:
      current_block = (Rpc - LABEL_8_32);
      goto continuation_14;

    case 17:
      current_block = (Rpc - LABEL_8_35);
      goto label_40;

    case 18:
      current_block = (Rpc - LABEL_8_34);
      goto continuation_15;

    case 19:
      current_block = (Rpc - LABEL_8_36);
      goto rowloop_31;

    case 20:
      current_block = (Rpc - LABEL_8_37);
      goto label_41;

    case 21:
      current_block = (Rpc - LABEL_8_40);
      goto continuation_25;

    case 22:
      current_block = (Rpc - LABEL_8_38);
      goto continuation_18;

    case 23:
      current_block = (Rpc - LABEL_8_41);
      goto label_45;

    case 24:
      current_block = (Rpc - LABEL_8_43);
      goto label_42;

    case 25:
      current_block = (Rpc - LABEL_8_44);
      goto label_43;

    case 26:
      current_block = (Rpc - LABEL_8_45);
      goto label_44;

    case 27:
      current_block = (Rpc - LABEL_8_42);
      goto continuation_24;

    case 28:
      current_block = (Rpc - LABEL_8_48);
      goto label_46;

    case 29:
      current_block = (Rpc - LABEL_8_47);
      goto continuation_21;

    case 30:
      current_block = (Rpc - LABEL_8_51);
      goto label_47;

    case 31:
      current_block = (Rpc - LABEL_8_50);
      goto continuation_26;

    case 32:
      current_block = (Rpc - LABEL_8_52);
      goto label_48;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (procedure__painter_50)
DEFLABEL (procedure__painter_38)
  INTERRUPT_CHECK (26, LABEL_8_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_8_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_54;

DEFLABEL (label_53)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_9]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_8_1]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_10]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_8_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_8_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_8_2]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_11]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_8_13);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_4]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_8_12);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 6));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_8_15);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_8_14])));
  Rhp += 3;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd12 = Wrd7;
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd12.pObj) [2]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd12.pObj) [3]) = (Wrd11.Obj);
  ((Wrd12.pObj) [4]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_54)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_7]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_8_0]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_8_7);
  goto label_53;

DEFLABEL (lambda_51)
  CLOSURE_HEADER (LABEL_8_14);

DEFLABEL (lambda_36)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_17]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_8_16);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_8_5]);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_19]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_8_18);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_20]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_21]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_8_20);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_55;
  Rvl = (current_block [OBJECT_8_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_55)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_22]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_23]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_8_22);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_24]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_25]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_8_24);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_26]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_27]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_8_26);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_28]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_29]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_8_28);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_31]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_8_30);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_33]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_8_32);
  (Rsp [5]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_34]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_57;
  Wrd9 = Wrd13;

DEFLABEL (label_56)
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [3]);
  (* (--Rsp)) = (Wrd17.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_8_34);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto rowloop_31;

DEFLABEL (label_57)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_35])), (Wrd10.pObj));

DEFLABEL (label_40)
  (Wrd9.Obj) = Rvl;
  goto label_56;

DEFLABEL (rowloop_52)
DEFLABEL (rowloop_31)
  INTERRUPT_CHECK (26, LABEL_8_36);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_75;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_75;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd23.Lng) > (Wrd25.Lng)))
    goto label_59;

DEFLABEL (label_58)
  Rvl = (current_block [OBJECT_8_6]);
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_59)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_38]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_39]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_8_38);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_8_7]))
    goto label_72;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_40]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_42]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 1))
    goto label_71;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_70)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_69;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_68)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_67;
  Wrd29 = Wrd33;

DEFLABEL (label_66)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_46]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_8_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_47]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_65;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_64)
  (Wrd17.Obj) = (current_block [OBJECT_8_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_49]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_8_47);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_50]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd15.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_8_0]));
  (Wrd18.Obj) = ((Wrd15.pObj) [0]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if ((Wrd19.uLng) == 50)
    goto label_63;
  Wrd14 = Wrd18;

DEFLABEL (label_62)
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd20.Obj) = (Rsp [19]);
  (Wrd21.pObj) = (OBJECT_ADDRESS (Wrd20.Obj));
  (Wrd22.Obj) = ((Wrd21.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_8_50);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_61;
  (Wrd11.Obj) = (Rsp [10]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_61;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_61;
  (Wrd8.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd10.pObj) = (& ((Wrd15.pObj) [(Wrd8.Lng)]));
  (Wrd6.Obj) = ((Wrd10.pObj) [1]);

DEFLABEL (label_60)
  (Rsp [6]) = (Wrd6.Obj);
  (Wrd25.Obj) = (Rsp [17]);
  (Wrd26.pObj) = (OBJECT_ADDRESS (Wrd25.Obj));
  (Wrd24.Obj) = ((Wrd26.pObj) [2]);
  (Rsp [7]) = (Wrd24.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_8_53]));

DEFLABEL (label_61)
  (Wrd20.Obj) = (Rsp [10]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_52]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_11]), 2);

DEFLABEL (label_48)
  (Wrd6.Obj) = Rvl;
  goto label_60;

DEFLABEL (label_63)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_51])), (Wrd15.pObj));

DEFLABEL (label_47)
  (Wrd14.Obj) = Rvl;
  goto label_62;

DEFLABEL (label_65)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_48]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_9]), 1);

DEFLABEL (label_46)
  (* (--Rsp)) = Rvl;
  goto label_64;

DEFLABEL (label_67)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_8_45])), (Wrd30.pObj));

DEFLABEL (label_44)
  (Wrd29.Obj) = Rvl;
  goto label_66;

DEFLABEL (label_69)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_44]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_9]), 1);

DEFLABEL (label_43)
  (* (--Rsp)) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_43]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_8_8]), 1);

DEFLABEL (label_42)
  (Wrd13.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_72)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_74;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_74;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_73)
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  goto rowloop_31;

DEFLABEL (label_74)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_41]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_45)
  (Wrd39.Obj) = Rvl;
  goto label_73;

DEFLABEL (label_75)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8_37]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_41)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_59;
  goto label_58;

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_8_40);
  goto label_72;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_9_4 3
#define LABEL_9_5 5
#define LABEL_9_7 7
#define LABEL_9_8 9
#define LABEL_9_9 11
#define LABEL_9_10 13
#define LABEL_9_13 15
#define LABEL_9_15 17
#define LABEL_9_16 19
#define LABEL_9_17 21
#define LABEL_9_20 23
#define LABEL_9_21 25
#define LABEL_9_18 27
#define LABEL_9_19 29
#define ENVIRONMENT_LABEL_9_3 44
#define DEBUGGING_LABEL_9_2 43
#define OBJECT_9_1 42
#define OBJECT_9_0 41
#define EXECUTE_CACHE_9_22 31
#define EXECUTE_CACHE_9_14 33
#define EXECUTE_CACHE_9_12 35
#define EXECUTE_CACHE_9_11 37
#define EXECUTE_CACHE_9_6 39
#define FREE_REFERENCES_LABEL_9_0 30
#define NUMBER_OF_LINKER_SECTIONS_9_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_9 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd35;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd34;
  machine_word Wrd31;
  machine_word Wrd30;
  double Dbl25;
  double Dbl24;
  double Dbl22;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd12;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd11;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  double Dbl9;
  machine_word Wrd9;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd14;
  double Dbl10;
  machine_word Wrd10;
  machine_word Wrd8;
  double Dbl7;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_9_4);
      goto fill_row_from_procedure_21;

    case 1:
      current_block = (Rpc - LABEL_9_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_9_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_9_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_9_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_9_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_9_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_9_15);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_9_16);
      goto fill_loop_15;

    case 9:
      current_block = (Rpc - LABEL_9_17);
      goto continuation_11;

    case 10:
      current_block = (Rpc - LABEL_9_20);
      goto label_24;

    case 11:
      current_block = (Rpc - LABEL_9_21);
      goto label_25;

    case 12:
      current_block = (Rpc - LABEL_9_18);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_9_19);
      goto continuation_9;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fill_row_from_procedure_27)
DEFLABEL (fill_row_from_procedure_21)
  INTERRUPT_CHECK (26, LABEL_9_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_9_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_9_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_9_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_9_7);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_10]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_9_13);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_31;
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_31;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd21.Lng) > (Wrd23.Lng))
    goto label_30;

DEFLABEL (label_29)
  (Wrd15.Obj) = (Rsp [4]);
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [0]);
  (Wrd17.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd17.Obj);
  (Rsp [1]) = (Wrd16.Obj);
  goto fill_loop_15;

DEFLABEL (label_30)
  Rvl = (current_block [OBJECT_9_0]);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd9.Obj) = (Rsp [4]);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_15]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_23)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_29;
  goto label_30;

DEFLABEL (fill_loop_28)
DEFLABEL (fill_loop_15)
  INTERRUPT_CHECK (26, LABEL_9_16);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd6.Lng) > (Wrd8.Lng)))
    goto label_32;
  Rvl = (current_block [OBJECT_9_0]);
  Rsp = (& (Rsp [11]));
  goto pop_return;

DEFLABEL (label_32)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_19]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd20.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 3);
  }

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_9_19);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_6]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_9_18);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_9_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_9_17);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 6))
    goto label_36;
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 6))
    goto label_36;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd13.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd11.Obj));
  Dbl10 = (Dbl7 + Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd5.Obj));

DEFLABEL (label_35)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 6))
    goto label_34;
  (Wrd26.Obj) = (Rsp [8]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 6))
    goto label_34;
  Dbl22 = (FLONUM_TO_DOUBLE (Wrd28.Obj));
  Dbl24 = (FLONUM_TO_DOUBLE (Wrd26.Obj));
  Dbl25 = (Dbl22 + Dbl24);
  INLINE_DOUBLE_TO_FLONUM (Dbl25, (Wrd20.Obj));

DEFLABEL (label_33)
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Rsp [2]) = (Wrd35.Obj);
  goto fill_loop_15;

DEFLABEL (label_34)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (Rsp [8]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_21]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_25)
  (Wrd20.Obj) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [7]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9_20]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_9_1]), 2);

DEFLABEL (label_24)
  (Wrd5.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_10_4 3
#define LABEL_10_8 5
#define LABEL_10_5 7
#define LABEL_10_6 9
#define LABEL_10_10 11
#define LABEL_10_11 13
#define LABEL_10_12 15
#define LABEL_10_13 17
#define LABEL_10_14 19
#define LABEL_10_15 21
#define LABEL_10_17 23
#define LABEL_10_18 25
#define LABEL_10_21 27
#define TAG_10_22 12
#define LABEL_10_23 29
#define LABEL_10_25 31
#define LABEL_10_27 33
#define LABEL_10_29 35
#define LABEL_10_30 37
#define LABEL_10_31 39
#define LABEL_10_32 41
#define LABEL_10_34 43
#define LABEL_10_36 45
#define LABEL_10_38 47
#define LABEL_10_40 49
#define LABEL_10_42 51
#define LABEL_10_44 53
#define LABEL_10_45 55
#define LABEL_10_47 57
#define LABEL_10_46 59
#define LABEL_10_48 61
#define LABEL_10_49 63
#define LABEL_10_52 65
#define LABEL_10_50 67
#define LABEL_10_53 69
#define LABEL_10_55 71
#define LABEL_10_56 73
#define LABEL_10_57 75
#define LABEL_10_54 77
#define LABEL_10_60 79
#define LABEL_10_59 81
#define LABEL_10_63 83
#define LABEL_10_62 85
#define LABEL_10_64 87
#define ENVIRONMENT_LABEL_10_3 141
#define DEBUGGING_LABEL_10_2 140
#define OBJECT_10_11 139
#define OBJECT_10_10 138
#define OBJECT_10_9 137
#define OBJECT_10_8 136
#define OBJECT_10_7 135
#define OBJECT_10_6 134
#define OBJECT_10_5 133
#define OBJECT_10_4 132
#define OBJECT_10_3 131
#define OBJECT_10_2 130
#define OBJECT_10_1 129
#define OBJECT_10_0 128
#define EXECUTE_CACHE_10_65 89
#define EXECUTE_CACHE_10_61 91
#define EXECUTE_CACHE_10_58 93
#define EXECUTE_CACHE_10_51 95
#define EXECUTE_CACHE_10_43 97
#define EXECUTE_CACHE_10_41 99
#define EXECUTE_CACHE_10_39 101
#define EXECUTE_CACHE_10_37 103
#define EXECUTE_CACHE_10_35 105
#define EXECUTE_CACHE_10_33 107
#define EXECUTE_CACHE_10_28 109
#define EXECUTE_CACHE_10_26 111
#define EXECUTE_CACHE_10_24 113
#define EXECUTE_CACHE_10_20 115
#define EXECUTE_CACHE_10_19 117
#define EXECUTE_CACHE_10_16 119
#define EXECUTE_CACHE_10_9 121
#define EXECUTE_CACHE_10_7 123
#define FREE_REFERENCE_10_1 126
#define FREE_REFERENCE_10_0 127
#define FREE_REFERENCES_LABEL_10_0 88
#define NUMBER_OF_LINKER_SECTIONS_10_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_10 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd31;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd20;
  machine_word Wrd29;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd30;
  machine_word Wrd28;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd39;
  machine_word Wrd42;
  machine_word Wrd44;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd25;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd21;
  machine_word Wrd22;
  machine_word Wrd5;
  machine_word Wrd15;
  machine_word Wrd16;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_10_4);
      goto picture__painter_48;

    case 1:
      current_block = (Rpc - LABEL_10_8);
      goto continuation_2;

    case 2:
      current_block = (Rpc - LABEL_10_5);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_10_6);
      goto continuation_0;

    case 4:
      current_block = (Rpc - LABEL_10_10);
      goto continuation_10;

    case 5:
      current_block = (Rpc - LABEL_10_11);
      goto continuation_9;

    case 6:
      current_block = (Rpc - LABEL_10_12);
      goto continuation_8;

    case 7:
      current_block = (Rpc - LABEL_10_13);
      goto continuation_7;

    case 8:
      current_block = (Rpc - LABEL_10_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_10_15);
      goto continuation_5;

    case 10:
      current_block = (Rpc - LABEL_10_17);
      goto continuation_4;

    case 11:
      current_block = (Rpc - LABEL_10_18);
      goto continuation_3;

    case 12:
      current_block = (Rpc - LABEL_10_21);
      goto lambda_63;

    case 13:
      current_block = (Rpc - LABEL_10_23);
      goto continuation_11;

    case 14:
      current_block = (Rpc - LABEL_10_25);
      goto continuation_12;

    case 15:
      current_block = (Rpc - LABEL_10_27);
      goto continuation_13;

    case 16:
      current_block = (Rpc - LABEL_10_29);
      goto continuation_21;

    case 17:
      current_block = (Rpc - LABEL_10_30);
      goto label_50;

    case 18:
      current_block = (Rpc - LABEL_10_31);
      goto continuation_20;

    case 19:
      current_block = (Rpc - LABEL_10_32);
      goto continuation_19;

    case 20:
      current_block = (Rpc - LABEL_10_34);
      goto continuation_18;

    case 21:
      current_block = (Rpc - LABEL_10_36);
      goto continuation_17;

    case 22:
      current_block = (Rpc - LABEL_10_38);
      goto continuation_16;

    case 23:
      current_block = (Rpc - LABEL_10_40);
      goto continuation_15;

    case 24:
      current_block = (Rpc - LABEL_10_42);
      goto continuation_14;

    case 25:
      current_block = (Rpc - LABEL_10_44);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_10_45);
      goto label_51;

    case 27:
      current_block = (Rpc - LABEL_10_47);
      goto label_52;

    case 28:
      current_block = (Rpc - LABEL_10_46);
      goto continuation_25;

    case 29:
      current_block = (Rpc - LABEL_10_48);
      goto rowloop_41;

    case 30:
      current_block = (Rpc - LABEL_10_49);
      goto label_53;

    case 31:
      current_block = (Rpc - LABEL_10_52);
      goto continuation_35;

    case 32:
      current_block = (Rpc - LABEL_10_50);
      goto continuation_28;

    case 33:
      current_block = (Rpc - LABEL_10_53);
      goto label_57;

    case 34:
      current_block = (Rpc - LABEL_10_55);
      goto label_54;

    case 35:
      current_block = (Rpc - LABEL_10_56);
      goto label_55;

    case 36:
      current_block = (Rpc - LABEL_10_57);
      goto label_56;

    case 37:
      current_block = (Rpc - LABEL_10_54);
      goto continuation_34;

    case 38:
      current_block = (Rpc - LABEL_10_60);
      goto label_58;

    case 39:
      current_block = (Rpc - LABEL_10_59);
      goto continuation_31;

    case 40:
      current_block = (Rpc - LABEL_10_63);
      goto label_59;

    case 41:
      current_block = (Rpc - LABEL_10_62);
      goto continuation_36;

    case 42:
      current_block = (Rpc - LABEL_10_64);
      goto label_60;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (picture__painter_62)
DEFLABEL (picture__painter_48)
  INTERRUPT_CHECK (26, LABEL_10_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_6]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_10_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_10_5);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_66;

DEFLABEL (label_65)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_10]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (current_block [OBJECT_10_3]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_11]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_10_11);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_10_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_10_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_13]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_10_1]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_7]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_10_13);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_4]), 2);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_10_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_15]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_10_15);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_10_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_17]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_18]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_20]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_10_17);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_10_22);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_10_21])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [4]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  ((Wrd16.pObj) [6]) = Rvl;
  Rvl = (Wrd6.Obj);
  Rsp = (& (Rsp [5]));
  goto pop_return;

DEFLABEL (label_66)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_8]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (current_block [OBJECT_10_2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_9]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_10_8);
  goto label_65;

DEFLABEL (lambda_63)
  CLOSURE_HEADER (LABEL_10_21);

DEFLABEL (lambda_46)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_24]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_10_23);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_25]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (Rsp [3]);
  (Wrd10.pObj) = (OBJECT_ADDRESS (Wrd9.Obj));
  (Wrd11.Obj) = ((Wrd10.pObj) [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = ((Wrd10.pObj) [6]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_26]));

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_10_25);
  (Rsp [0]) = Rvl;
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_27]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_28]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_10_27);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_67;
  Rvl = (current_block [OBJECT_10_6]);
  Rsp = (& (Rsp [3]));
  goto pop_return;

DEFLABEL (label_67)
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_29]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.pObj) = (OBJECT_ADDRESS (Wrd12.Obj));
  (Wrd14.Obj) = ((Wrd13.pObj) [2]);
  (* (--Rsp)) = (Wrd14.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_16]));

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_10_29);
  (Wrd5.Obj) = Rvl;
  (Wrd10.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd10.uLng) == 26))
    goto label_73;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd11.Lng) = ((Wrd12.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd11.Lng)))
    goto label_73;
  (Wrd13.Obj) = (LONG_TO_FIXNUM (Wrd11.Lng));
  (* (--Rsp)) = (Wrd13.Obj);

DEFLABEL (label_72)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_31]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd17.Obj) = (Rsp [3]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd22.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_20)
  INTERRUPT_CHECK (27, LABEL_10_31);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_33]));

DEFLABEL (continuation_19)
  INTERRUPT_CHECK (27, LABEL_10_32);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_35]));

DEFLABEL (continuation_18)
  INTERRUPT_CHECK (27, LABEL_10_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_36]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_37]));

DEFLABEL (continuation_17)
  INTERRUPT_CHECK (27, LABEL_10_36);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_38]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_39]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_10_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_41]));

DEFLABEL (continuation_15)
  INTERRUPT_CHECK (27, LABEL_10_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_42]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_43]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_10_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [10]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_19]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_10_44);
  (Wrd5.Obj) = Rvl;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_71;
  (Wrd13.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd12.Lng) = ((Wrd13.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd12.Lng)))
    goto label_71;
  (Wrd10.Obj) = (LONG_TO_FIXNUM (Wrd12.Lng));

DEFLABEL (label_70)
  (Rsp [8]) = (Wrd10.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_46]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd18.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd21.Obj) = ((Wrd18.pObj) [0]);
  (Wrd22.uLng) = (OBJECT_TYPE (Wrd21.Obj));
  if ((Wrd22.uLng) == 50)
    goto label_69;
  Wrd17 = Wrd21;

DEFLABEL (label_68)
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd23.Obj) = (Rsp [11]);
  (Wrd24.pObj) = (OBJECT_ADDRESS (Wrd23.Obj));
  (Wrd25.Obj) = ((Wrd24.pObj) [3]);
  (* (--Rsp)) = (Wrd25.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_10_46);
  (Wrd5.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd5.Obj);
  goto rowloop_41;

DEFLABEL (label_69)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_47])), (Wrd18.pObj));

DEFLABEL (label_52)
  (Wrd17.Obj) = Rvl;
  goto label_68;

DEFLABEL (label_71)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_45]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_51)
  (Wrd10.Obj) = Rvl;
  goto label_70;

DEFLABEL (label_73)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_30]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_50)
  (* (--Rsp)) = Rvl;
  goto label_72;

DEFLABEL (rowloop_64)
DEFLABEL (rowloop_41)
  INTERRUPT_CHECK (26, LABEL_10_48);
  (Wrd5.Obj) = (Rsp [0]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_91;
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd7.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_91;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if (! ((Wrd23.Lng) > (Wrd25.Lng)))
    goto label_75;

DEFLABEL (label_74)
  Rvl = (current_block [OBJECT_10_6]);
  Rsp = (& (Rsp [12]));
  goto pop_return;

DEFLABEL (label_75)
  (Wrd17.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_50]))));
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_51]));

DEFLABEL (continuation_28)
  INTERRUPT_CHECK (27, LABEL_10_50);
  (* (--Rsp)) = Rvl;
  if (Rvl == (current_block [OBJECT_10_7]))
    goto label_88;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_52]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_54]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd17.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd17.uLng) == 1))
    goto label_87;
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd13.Obj) = ((Wrd15.pObj) [1]);

DEFLABEL (label_86)
  (Wrd24.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd24.uLng) == 1))
    goto label_85;
  (Wrd22.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd23.Obj) = ((Wrd22.pObj) [0]);
  (* (--Rsp)) = (Wrd23.Obj);

DEFLABEL (label_84)
  (Wrd30.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_1]));
  (Wrd33.Obj) = ((Wrd30.pObj) [0]);
  (Wrd34.uLng) = (OBJECT_TYPE (Wrd33.Obj));
  if ((Wrd34.uLng) == 50)
    goto label_83;
  Wrd29 = Wrd33;

DEFLABEL (label_82)
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_58]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_10_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_59]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 1))
    goto label_81;
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_80)
  (Wrd17.Obj) = (current_block [OBJECT_10_10]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_61]));

DEFLABEL (continuation_31)
  INTERRUPT_CHECK (27, LABEL_10_59);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_10_10]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_62]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd12.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_10_0]));
  (Wrd15.Obj) = ((Wrd12.pObj) [0]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if ((Wrd16.uLng) == 50)
    goto label_79;
  Wrd11 = Wrd15;

DEFLABEL (label_78)
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd17.Obj) = (Rsp [19]);
  (Wrd18.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd19.Obj) = ((Wrd18.pObj) [4]);
  (* (--Rsp)) = (Wrd19.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_10_62);
  (Wrd5.Obj) = Rvl;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 10))
    goto label_77;
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 26))
    goto label_77;
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  (Wrd15.pObj) = (OBJECT_ADDRESS (Rvl));
  (Wrd16.Obj) = ((Wrd15.pObj) [0]);
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  if (! (((unsigned long) (Wrd14.Lng)) < ((unsigned long) (Wrd17.Lng))))
    goto label_77;
  (Wrd7.uLng) = (OBJECT_DATUM (Wrd11.Obj));
  (Wrd9.pObj) = (& ((Wrd15.pObj) [(Wrd7.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_76)
  (Wrd24.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd24.Obj);
  (Wrd25.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd26.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd26.Obj);
  (Wrd27.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd27.Obj);
  (Wrd28.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [13]);
  (* (--Rsp)) = (Wrd29.Obj);
  (Wrd30.Obj) = (current_block [OBJECT_10_10]);
  (Rsp [10]) = (Wrd30.Obj);
  (Wrd31.Obj) = (Rsp [23]);
  (Rsp [11]) = (Wrd31.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_10_65]));

DEFLABEL (label_77)
  (Wrd20.Obj) = (Rsp [7]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_64]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_11]), 2);

DEFLABEL (label_60)
  (* (--Rsp)) = Rvl;
  goto label_76;

DEFLABEL (label_79)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_63])), (Wrd12.pObj));

DEFLABEL (label_59)
  (Wrd11.Obj) = Rvl;
  goto label_78;

DEFLABEL (label_81)
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_60]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_9]), 1);

DEFLABEL (label_58)
  (* (--Rsp)) = Rvl;
  goto label_80;

DEFLABEL (label_83)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_10_57])), (Wrd30.pObj));

DEFLABEL (label_56)
  (Wrd29.Obj) = Rvl;
  goto label_82;

DEFLABEL (label_85)
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_56]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd13.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_9]), 1);

DEFLABEL (label_55)
  (* (--Rsp)) = Rvl;
  goto label_84;

DEFLABEL (label_87)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_55]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_10_8]), 1);

DEFLABEL (label_54)
  (Wrd13.Obj) = Rvl;
  goto label_86;

DEFLABEL (label_88)
  (Wrd40.Obj) = (Rsp [1]);
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd40.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_90;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd40.Obj));
  (Wrd42.Lng) = ((Wrd44.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd42.Lng)))
    goto label_90;
  (Wrd39.Obj) = (LONG_TO_FIXNUM (Wrd42.Lng));

DEFLABEL (label_89)
  (Rsp [1]) = (Wrd39.Obj);
  Rsp = (& (Rsp [1]));
  goto rowloop_41;

DEFLABEL (label_90)
  (Wrd35.Obj) = (Rsp [1]);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_53]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_57)
  (Wrd39.Obj) = Rvl;
  goto label_89;

DEFLABEL (label_91)
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (Rsp [3]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10_49]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_53)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_75;
  goto label_74;

DEFLABEL (continuation_35)
  INTERRUPT_CHECK (27, LABEL_10_52);
  goto label_88;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_11_4 3
#define LABEL_11_5 5
#define LABEL_11_7 7
#define LABEL_11_8 9
#define LABEL_11_9 11
#define LABEL_11_10 13
#define LABEL_11_13 15
#define LABEL_11_15 17
#define LABEL_11_16 19
#define LABEL_11_17 21
#define LABEL_11_18 23
#define LABEL_11_19 25
#define LABEL_11_20 27
#define LABEL_11_21 29
#define LABEL_11_22 31
#define LABEL_11_23 33
#define LABEL_11_24 35
#define LABEL_11_25 37
#define LABEL_11_26 39
#define LABEL_11_27 41
#define LABEL_11_28 43
#define LABEL_11_29 45
#define LABEL_11_30 47
#define LABEL_11_31 49
#define LABEL_11_32 51
#define LABEL_11_33 53
#define LABEL_11_35 55
#define LABEL_11_36 57
#define LABEL_11_37 59
#define LABEL_11_38 61
#define LABEL_11_34 63
#define LABEL_11_40 65
#define LABEL_11_39 67
#define LABEL_11_41 69
#define LABEL_11_44 71
#define LABEL_11_45 73
#define LABEL_11_46 75
#define LABEL_11_47 77
#define LABEL_11_48 79
#define LABEL_11_49 81
#define LABEL_11_42 83
#define LABEL_11_51 85
#define LABEL_11_56 87
#define LABEL_11_50 89
#define LABEL_11_52 91
#define LABEL_11_58 93
#define LABEL_11_59 95
#define LABEL_11_53 97
#define LABEL_11_54 99
#define LABEL_11_57 101
#define LABEL_11_62 103
#define LABEL_11_61 105
#define LABEL_11_66 107
#define LABEL_11_63 109
#define LABEL_11_68 111
#define LABEL_11_64 113
#define LABEL_11_65 115
#define ENVIRONMENT_LABEL_11_3 140
#define DEBUGGING_LABEL_11_2 139
#define OBJECT_11_2 138
#define OBJECT_11_1 137
#define OBJECT_11_0 136
#define EXECUTE_CACHE_11_67 117
#define EXECUTE_CACHE_11_60 119
#define EXECUTE_CACHE_11_55 121
#define EXECUTE_CACHE_11_43 123
#define EXECUTE_CACHE_11_14 125
#define EXECUTE_CACHE_11_12 127
#define EXECUTE_CACHE_11_11 129
#define EXECUTE_CACHE_11_6 131
#define FREE_REFERENCE_11_1 134
#define FREE_REFERENCE_11_0 135
#define FREE_REFERENCES_LABEL_11_0 116
#define NUMBER_OF_LINKER_SECTIONS_11_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_11 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd21;
  machine_word Wrd24;
  double Dbl24;
  machine_word Wrd22;
  double Dbl22;
  machine_word Wrd40;
  machine_word Wrd142;
  machine_word Wrd141;
  machine_word Wrd130;
  machine_word Wrd125;
  machine_word Wrd127;
  machine_word Wrd126;
  machine_word Wrd131;
  machine_word Wrd136;
  machine_word Wrd140;
  machine_word Wrd135;
  machine_word Wrd134;
  machine_word Wrd133;
  machine_word Wrd132;
  machine_word Wrd124;
  machine_word Wrd123;
  machine_word Wrd108;
  machine_word Wrd105;
  machine_word Wrd102;
  machine_word Wrd104;
  machine_word Wrd103;
  machine_word Wrd109;
  machine_word Wrd116;
  machine_word Wrd122;
  machine_word Wrd120;
  machine_word Wrd115;
  machine_word Wrd114;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd111;
  machine_word Wrd110;
  machine_word Wrd101;
  machine_word Wrd100;
  machine_word Wrd93;
  machine_word Wrd99;
  machine_word Wrd97;
  machine_word Wrd89;
  machine_word Wrd150;
  machine_word Wrd146;
  machine_word Wrd67;
  machine_word Wrd63;
  machine_word Wrd87;
  machine_word Wrd76;
  machine_word Wrd71;
  machine_word Wrd79;
  machine_word Wrd54;
  machine_word Wrd48;
  machine_word Wrd50;
  machine_word Wrd68;
  machine_word Wrd60;
  machine_word Wrd59;
  machine_word Wrd47;
  machine_word Wrd46;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd34;
  machine_word Wrd33;
  machine_word Wrd96;
  machine_word Wrd92;
  double Dbl9;
  machine_word Wrd9;
  machine_word Wrd57;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd58;
  machine_word Wrd51;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd52;
  machine_word Wrd49;
  machine_word Wrd64;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd65;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd66;
  machine_word Wrd38;
  machine_word Wrd43;
  machine_word Wrd42;
  machine_word Wrd39;
  machine_word Wrd36;
  machine_word Wrd72;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd73;
  machine_word Wrd78;
  machine_word Wrd77;
  machine_word Wrd74;
  double Dbl25;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd23;
  machine_word Wrd80;
  machine_word Wrd18;
  machine_word Wrd81;
  machine_word Wrd86;
  machine_word Wrd85;
  machine_word Wrd82;
  machine_word Wrd13;
  machine_word Wrd88;
  machine_word Wrd6;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd5;
  machine_word Wrd17;
  machine_word Wrd8;
  double Dbl7;
  machine_word Wrd7;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd11;
  double Dbl10;
  machine_word Wrd10;
  machine_word Wrd12;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_11_4);
      goto fill_row_from_picture_78;

    case 1:
      current_block = (Rpc - LABEL_11_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_11_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_11_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_11_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_11_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_11_13);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_11_15);
      goto continuation_8;

    case 8:
      current_block = (Rpc - LABEL_11_16);
      goto continuation_7;

    case 9:
      current_block = (Rpc - LABEL_11_17);
      goto continuation_6;

    case 10:
      current_block = (Rpc - LABEL_11_18);
      goto continuation_9;

    case 11:
      current_block = (Rpc - LABEL_11_19);
      goto continuation_10;

    case 12:
      current_block = (Rpc - LABEL_11_20);
      goto label_80;

    case 13:
      current_block = (Rpc - LABEL_11_21);
      goto label_81;

    case 14:
      current_block = (Rpc - LABEL_11_22);
      goto label_91;

    case 15:
      current_block = (Rpc - LABEL_11_23);
      goto label_82;

    case 16:
      current_block = (Rpc - LABEL_11_24);
      goto label_83;

    case 17:
      current_block = (Rpc - LABEL_11_25);
      goto label_90;

    case 18:
      current_block = (Rpc - LABEL_11_26);
      goto label_84;

    case 19:
      current_block = (Rpc - LABEL_11_27);
      goto label_85;

    case 20:
      current_block = (Rpc - LABEL_11_28);
      goto label_89;

    case 21:
      current_block = (Rpc - LABEL_11_29);
      goto label_86;

    case 22:
      current_block = (Rpc - LABEL_11_30);
      goto label_87;

    case 23:
      current_block = (Rpc - LABEL_11_31);
      goto label_88;

    case 24:
      current_block = (Rpc - LABEL_11_32);
      goto find_real_start_loop_28;

    case 25:
      current_block = (Rpc - LABEL_11_33);
      goto continuation_23;

    case 26:
      current_block = (Rpc - LABEL_11_35);
      goto label_92;

    case 27:
      current_block = (Rpc - LABEL_11_36);
      goto label_93;

    case 28:
      current_block = (Rpc - LABEL_11_37);
      goto label_94;

    case 29:
      current_block = (Rpc - LABEL_11_38);
      goto label_95;

    case 30:
      current_block = (Rpc - LABEL_11_34);
      goto continuation_22;

    case 31:
      current_block = (Rpc - LABEL_11_40);
      goto find_real_end_loop_39;

    case 32:
      current_block = (Rpc - LABEL_11_39);
      goto continuation_21;

    case 33:
      current_block = (Rpc - LABEL_11_41);
      goto continuation_34;

    case 34:
      current_block = (Rpc - LABEL_11_44);
      goto label_98;

    case 35:
      current_block = (Rpc - LABEL_11_45);
      goto label_99;

    case 36:
      current_block = (Rpc - LABEL_11_46);
      goto label_100;

    case 37:
      current_block = (Rpc - LABEL_11_47);
      goto label_101;

    case 38:
      current_block = (Rpc - LABEL_11_48);
      goto label_96;

    case 39:
      current_block = (Rpc - LABEL_11_49);
      goto label_97;

    case 40:
      current_block = (Rpc - LABEL_11_42);
      goto continuation_33;

    case 41:
      current_block = (Rpc - LABEL_11_51);
      goto fill_loop_53;

    case 42:
      current_block = (Rpc - LABEL_11_56);
      goto fill_loop_65;

    case 43:
      current_block = (Rpc - LABEL_11_50);
      goto continuation_32;

    case 44:
      current_block = (Rpc - LABEL_11_52);
      goto continuation_49;

    case 45:
      current_block = (Rpc - LABEL_11_58);
      goto label_102;

    case 46:
      current_block = (Rpc - LABEL_11_59);
      goto label_103;

    case 47:
      current_block = (Rpc - LABEL_11_53);
      goto continuation_48;

    case 48:
      current_block = (Rpc - LABEL_11_54);
      goto continuation_47;

    case 49:
      current_block = (Rpc - LABEL_11_57);
      goto continuation_56;

    case 50:
      current_block = (Rpc - LABEL_11_62);
      goto label_104;

    case 51:
      current_block = (Rpc - LABEL_11_61);
      goto continuation_45;

    case 52:
      current_block = (Rpc - LABEL_11_66);
      goto label_105;

    case 53:
      current_block = (Rpc - LABEL_11_63);
      goto continuation_61;

    case 54:
      current_block = (Rpc - LABEL_11_68);
      goto label_106;

    case 55:
      current_block = (Rpc - LABEL_11_64);
      goto continuation_60;

    case 56:
      current_block = (Rpc - LABEL_11_65);
      goto continuation_59;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (fill_row_from_picture_108)
DEFLABEL (fill_row_from_picture_78)
  INTERRUPT_CHECK (26, LABEL_11_4);
  (Wrd12.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd12.Obj);
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (Rsp [1]) = (Wrd11.Obj);
  (Wrd16.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd16.Obj);
  (Wrd14.pObj) = (& (Rhp [-1]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd14.pObj)));
  (Rsp [2]) = (Wrd15.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_11_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_8]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [6]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_11_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_11_8);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_11_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_11_10);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_11_13);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd19.pObj) = (& (Rhp [-1]));
  (Wrd20.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd19.pObj)));
  (Rsp [0]) = (Wrd20.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_15]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_16]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_17]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [10]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11_17);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_12]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_11_16);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd5.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_11_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_18]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_11]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_11_18);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd10.pObj) = (& (Rhp [-1]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd10.pObj)));
  (Rsp [0]) = (Wrd11.Obj);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_11_19);
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = Rvl;
  (Wrd90.pObj) = (& (Rhp [-1]));
  (Wrd91.Obj) = (MAKE_POINTER_OBJECT (54, (Wrd90.pObj)));
  (Rsp [0]) = (Wrd91.Obj);
  (Wrd5.Obj) = (Rsp [11]);
  (Wrd6.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd6.uLng) == 26))
    goto label_144;
  (Wrd88.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd88.Lng) > 0)
    goto label_141;

DEFLABEL (label_140)
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_139;
  Wrd12 = Wrd16;

DEFLABEL (label_138)
  (* (--Rsp)) = (Wrd12.Obj);

DEFLABEL (label_137)
  (Wrd18.Obj) = (Rsp [13]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_136;
  (Wrd80.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  if ((Wrd80.Lng) > 0)
    goto label_133;

DEFLABEL (label_132)
  (Wrd26.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd29.Obj) = ((Wrd26.pObj) [0]);
  (Wrd30.uLng) = (OBJECT_TYPE (Wrd29.Obj));
  if ((Wrd30.uLng) == 50)
    goto label_131;
  Wrd25 = Wrd29;

DEFLABEL (label_130)
  (* (--Rsp)) = (Wrd25.Obj);

DEFLABEL (label_129)
  (Wrd31.Obj) = (Rsp [13]);
  (Wrd32.uLng) = (OBJECT_TYPE (Wrd31.Obj));
  if (! ((Wrd32.uLng) == 26))
    goto label_128;
  (Wrd72.Lng) = (FIXNUM_TO_LONG (Wrd31.Obj));
  if ((Wrd72.Lng) > 0)
    goto label_125;

DEFLABEL (label_124)
  (Wrd39.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd42.Obj) = ((Wrd39.pObj) [0]);
  (Wrd43.uLng) = (OBJECT_TYPE (Wrd42.Obj));
  if ((Wrd43.uLng) == 50)
    goto label_123;
  Wrd38 = Wrd42;

DEFLABEL (label_122)
  (* (--Rsp)) = (Wrd38.Obj);

DEFLABEL (label_121)
  (Wrd44.Obj) = (Rsp [15]);
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd44.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_120;
  (Wrd64.Lng) = (FIXNUM_TO_LONG (Wrd44.Obj));
  if ((Wrd64.Lng) > 0)
    goto label_117;

DEFLABEL (label_116)
  (Wrd52.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd55.Obj) = ((Wrd52.pObj) [0]);
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd55.Obj));
  if ((Wrd56.uLng) == 50)
    goto label_115;
  Wrd51 = Wrd55;

DEFLABEL (label_114)
  (* (--Rsp)) = (Wrd51.Obj);

DEFLABEL (label_113)
  goto find_real_start_loop_28;

DEFLABEL (label_115)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_30])), (Wrd52.pObj));

DEFLABEL (label_87)
  (Wrd51.Obj) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd58.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd61.Obj) = ((Wrd58.pObj) [0]);
  (Wrd62.uLng) = (OBJECT_TYPE (Wrd61.Obj));
  if ((Wrd62.uLng) == 50)
    goto label_119;
  Wrd57 = Wrd61;

DEFLABEL (label_118)
  (* (--Rsp)) = (Wrd57.Obj);
  goto label_113;

DEFLABEL (label_119)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_31])), (Wrd58.pObj));

DEFLABEL (label_88)
  (Wrd57.Obj) = Rvl;
  goto label_118;

DEFLABEL (label_120)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_29]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (* (--Rsp)) = (Wrd44.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_86)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_116;
  goto label_117;

DEFLABEL (label_123)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_27])), (Wrd39.pObj));

DEFLABEL (label_85)
  (Wrd38.Obj) = Rvl;
  goto label_122;

DEFLABEL (label_125)
  (Wrd66.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_0]));
  (Wrd69.Obj) = ((Wrd66.pObj) [0]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if ((Wrd70.uLng) == 50)
    goto label_127;
  Wrd65 = Wrd69;

DEFLABEL (label_126)
  (* (--Rsp)) = (Wrd65.Obj);
  goto label_121;

DEFLABEL (label_127)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_28])), (Wrd66.pObj));

DEFLABEL (label_89)
  (Wrd65.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_128)
  (Wrd36.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_26]))));
  (* (--Rsp)) = (Wrd36.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_84)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_124;
  goto label_125;

DEFLABEL (label_131)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_24])), (Wrd26.pObj));

DEFLABEL (label_83)
  (Wrd25.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd74.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd77.Obj) = ((Wrd74.pObj) [0]);
  (Wrd78.uLng) = (OBJECT_TYPE (Wrd77.Obj));
  if ((Wrd78.uLng) == 50)
    goto label_135;
  Wrd73 = Wrd77;

DEFLABEL (label_134)
  (* (--Rsp)) = (Wrd73.Obj);
  goto label_129;

DEFLABEL (label_135)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_25])), (Wrd74.pObj));

DEFLABEL (label_90)
  (Wrd73.Obj) = Rvl;
  goto label_134;

DEFLABEL (label_136)
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_23]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_82)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_132;
  goto label_133;

DEFLABEL (label_139)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_21])), (Wrd13.pObj));

DEFLABEL (label_81)
  (Wrd12.Obj) = Rvl;
  goto label_138;

DEFLABEL (label_141)
  (Wrd82.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_11_1]));
  (Wrd85.Obj) = ((Wrd82.pObj) [0]);
  (Wrd86.uLng) = (OBJECT_TYPE (Wrd85.Obj));
  if ((Wrd86.uLng) == 50)
    goto label_143;
  Wrd81 = Wrd85;

DEFLABEL (label_142)
  (* (--Rsp)) = (Wrd81.Obj);
  goto label_137;

DEFLABEL (label_143)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_11_22])), (Wrd82.pObj));

DEFLABEL (label_91)
  (Wrd81.Obj) = Rvl;
  goto label_142;

DEFLABEL (label_144)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (44);

DEFLABEL (label_80)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_140;
  goto label_141;

DEFLABEL (find_real_start_loop_109)
DEFLABEL (find_real_start_loop_28)
  INTERRUPT_CHECK (26, LABEL_11_32);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_33]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_34]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [13]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_22)
  INTERRUPT_CHECK (27, LABEL_11_34);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_39]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [15]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [11]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_21)
  INTERRUPT_CHECK (27, LABEL_11_39);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_43]));

DEFLABEL (continuation_23)
  INTERRUPT_CHECK (27, LABEL_11_33);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_146;

DEFLABEL (label_145)
  goto find_real_end_loop_39;

DEFLABEL (label_146)
  (Wrd7.Obj) = (Rsp [12]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_154;
  (Wrd11.Obj) = (Rsp [13]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_154;
  (Wrd92.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd96.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if ((Wrd92.Lng) > (Wrd96.Lng))
    goto label_145;

DEFLABEL (label_153)
  (Wrd33.Obj) = (Rsp [8]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd35.Obj) = ((Wrd34.pObj) [0]);
  (Wrd36.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd36.uLng) == 26))
    goto label_152;
  (Wrd37.Obj) = (Rsp [15]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_152;
  (Wrd43.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd39.Lng) = ((Wrd43.Lng) + (Wrd45.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd39.Lng)))
    goto label_152;
  (Wrd32.Obj) = (LONG_TO_FIXNUM (Wrd39.Lng));

DEFLABEL (label_151)
  (Wrd46.Obj) = (Rsp [8]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  ((Wrd47.pObj) [0]) = (Wrd32.Obj);
  (Wrd56.Obj) = (Rsp [7]);
  (Wrd57.pObj) = (OBJECT_ADDRESS (Wrd56.Obj));
  (Wrd58.Obj) = ((Wrd57.pObj) [0]);
  (Wrd59.uLng) = (OBJECT_TYPE (Wrd58.Obj));
  if (! ((Wrd59.uLng) == 26))
    goto label_150;
  (Wrd60.Obj) = (Rsp [16]);
  (Wrd61.uLng) = (OBJECT_TYPE (Wrd60.Obj));
  if (! ((Wrd61.uLng) == 26))
    goto label_150;
  (Wrd66.Lng) = (FIXNUM_TO_LONG (Wrd58.Obj));
  (Wrd68.Lng) = (FIXNUM_TO_LONG (Wrd60.Obj));
  (Wrd62.Lng) = ((Wrd66.Lng) + (Wrd68.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd62.Lng)))
    goto label_150;
  (Wrd55.Obj) = (LONG_TO_FIXNUM (Wrd62.Lng));

DEFLABEL (label_149)
  (Wrd69.Obj) = (Rsp [7]);
  (Wrd70.pObj) = (OBJECT_ADDRESS (Wrd69.Obj));
  ((Wrd70.pObj) [0]) = (Wrd55.Obj);
  (Wrd78.Obj) = (Rsp [12]);
  (Wrd79.pObj) = (OBJECT_ADDRESS (Wrd78.Obj));
  (Wrd80.Obj) = ((Wrd79.pObj) [0]);
  (Wrd81.uLng) = (OBJECT_TYPE (Wrd80.Obj));
  if (! ((Wrd81.uLng) == 26))
    goto label_148;
  (Wrd86.Lng) = (FIXNUM_TO_LONG (Wrd80.Obj));
  (Wrd82.Lng) = ((Wrd86.Lng) + 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd82.Lng)))
    goto label_148;
  (Wrd77.Obj) = (LONG_TO_FIXNUM (Wrd82.Lng));

DEFLABEL (label_147)
  (Wrd87.Obj) = (Rsp [12]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  ((Wrd88.pObj) [0]) = (Wrd77.Obj);
  goto find_real_start_loop_28;

DEFLABEL (label_148)
  (Wrd72.Obj) = (Rsp [12]);
  (Wrd73.pObj) = (OBJECT_ADDRESS (Wrd72.Obj));
  (Wrd71.Obj) = ((Wrd73.pObj) [0]);
  (Wrd76.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_38]))));
  (* (--Rsp)) = (Wrd76.Obj);
  (* (--Rsp)) = (Wrd71.Obj);
  INVOKE_INTERFACE_0 (38);

DEFLABEL (label_95)
  (Wrd77.Obj) = Rvl;
  goto label_147;

DEFLABEL (label_150)
  (Wrd49.Obj) = (Rsp [7]);
  (Wrd50.pObj) = (OBJECT_ADDRESS (Wrd49.Obj));
  (Wrd48.Obj) = ((Wrd50.pObj) [0]);
  (Wrd51.Obj) = (Rsp [16]);
  (Wrd54.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_37]))));
  (* (--Rsp)) = (Wrd54.Obj);
  (* (--Rsp)) = (Wrd51.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_94)
  (Wrd55.Obj) = Rvl;
  goto label_149;

DEFLABEL (label_152)
  (Wrd26.Obj) = (Rsp [8]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd25.Obj) = ((Wrd27.pObj) [0]);
  (Wrd28.Obj) = (Rsp [15]);
  (Wrd31.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_36]))));
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd28.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_93)
  (Wrd32.Obj) = Rvl;
  goto label_151;

DEFLABEL (label_154)
  (Wrd16.Obj) = (Rsp [12]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Obj) = (Rsp [13]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_35]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_92)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_153;
  goto label_145;

DEFLABEL (find_real_end_loop_110)
DEFLABEL (find_real_end_loop_39)
  INTERRUPT_CHECK (26, LABEL_11_40);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_41]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [23]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_42]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [10]);
  (Wrd16.pObj) = (OBJECT_ADDRESS (Wrd15.Obj));
  (Wrd17.Obj) = ((Wrd16.pObj) [0]);
  (* (--Rsp)) = (Wrd17.Obj);
  (Wrd18.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd18.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_33)
  INTERRUPT_CHECK (27, LABEL_11_42);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_50]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [12]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd11.Obj);
  {
    SCHEME_OBJECT procedure = (* (Rsp++));
    INVOKE_INTERFACE_2 (20, procedure, 2);
  }

DEFLABEL (continuation_32)
  INTERRUPT_CHECK (27, LABEL_11_50);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_43]));

DEFLABEL (continuation_34)
  INTERRUPT_CHECK (27, LABEL_11_41);
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_162;

DEFLABEL (label_161)
  (Wrd7.Obj) = (Rsp [12]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd10.uLng) == 26))
    goto label_160;
  (Wrd11.Obj) = (Rsp [13]);
  (Wrd12.pObj) = (OBJECT_ADDRESS (Wrd11.Obj));
  (Wrd13.Obj) = ((Wrd12.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 26))
    goto label_160;
  (Wrd56.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd60.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  if (! ((Wrd56.Lng) > (Wrd60.Lng)))
    goto label_156;

DEFLABEL (label_155)
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [23]));
  goto pop_return;

DEFLABEL (label_156)
  (Wrd25.Obj) = (Rsp [16]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_159;
  (Wrd50.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  if ((Wrd50.Lng) == 0)
    goto label_158;

DEFLABEL (label_157)
  (Wrd33.Obj) = (Rsp [8]);
  (Wrd34.pObj) = (OBJECT_ADDRESS (Wrd33.Obj));
  (Wrd32.Obj) = ((Wrd34.pObj) [0]);
  (Rsp [8]) = (Wrd32.Obj);
  (Wrd36.Obj) = (Rsp [7]);
  (Wrd37.pObj) = (OBJECT_ADDRESS (Wrd36.Obj));
  (Wrd35.Obj) = ((Wrd37.pObj) [0]);
  (Rsp [9]) = (Wrd35.Obj);
  (Wrd39.Obj) = (Rsp [12]);
  (Wrd40.pObj) = (OBJECT_ADDRESS (Wrd39.Obj));
  (Wrd38.Obj) = ((Wrd40.pObj) [0]);
  (Rsp [10]) = (Wrd38.Obj);
  Rsp = (& (Rsp [8]));
  goto fill_loop_53;

DEFLABEL (label_158)
  (Wrd43.Obj) = (Rsp [8]);
  (Wrd44.pObj) = (OBJECT_ADDRESS (Wrd43.Obj));
  (Wrd42.Obj) = ((Wrd44.pObj) [0]);
  (Rsp [5]) = (Wrd42.Obj);
  (Wrd46.Obj) = (Rsp [12]);
  (Wrd47.pObj) = (OBJECT_ADDRESS (Wrd46.Obj));
  (Wrd45.Obj) = ((Wrd47.pObj) [0]);
  (Rsp [6]) = (Wrd45.Obj);
  Rsp = (& (Rsp [5]));
  goto fill_loop_65;

DEFLABEL (label_159)
  (Wrd30.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_49]))));
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (45);

DEFLABEL (label_97)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_157;
  goto label_158;

DEFLABEL (label_160)
  (Wrd16.Obj) = (Rsp [12]);
  (Wrd17.pObj) = (OBJECT_ADDRESS (Wrd16.Obj));
  (Wrd15.Obj) = ((Wrd17.pObj) [0]);
  (Wrd19.Obj) = (Rsp [13]);
  (Wrd20.pObj) = (OBJECT_ADDRESS (Wrd19.Obj));
  (Wrd18.Obj) = ((Wrd20.pObj) [0]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_48]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_96)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_156;
  goto label_155;

DEFLABEL (label_162)
  (Wrd61.Obj) = (Rsp [13]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd63.Obj) = ((Wrd62.pObj) [0]);
  (Wrd64.uLng) = (OBJECT_TYPE (Wrd63.Obj));
  if (! ((Wrd64.uLng) == 26))
    goto label_170;
  (Wrd65.Obj) = (Rsp [12]);
  (Wrd66.pObj) = (OBJECT_ADDRESS (Wrd65.Obj));
  (Wrd67.Obj) = ((Wrd66.pObj) [0]);
  (Wrd68.uLng) = (OBJECT_TYPE (Wrd67.Obj));
  if (! ((Wrd68.uLng) == 26))
    goto label_170;
  (Wrd146.Lng) = (FIXNUM_TO_LONG (Wrd63.Obj));
  (Wrd150.Lng) = (FIXNUM_TO_LONG (Wrd67.Obj));
  if ((Wrd146.Lng) < (Wrd150.Lng))
    goto label_161;

DEFLABEL (label_169)
  (Wrd87.Obj) = (Rsp [5]);
  (Wrd88.pObj) = (OBJECT_ADDRESS (Wrd87.Obj));
  (Wrd89.Obj) = ((Wrd88.pObj) [0]);
  (Wrd90.uLng) = (OBJECT_TYPE (Wrd89.Obj));
  if (! ((Wrd90.uLng) == 26))
    goto label_168;
  (Wrd91.Obj) = (Rsp [15]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 26))
    goto label_168;
  (Wrd97.Lng) = (FIXNUM_TO_LONG (Wrd89.Obj));
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  (Wrd93.Lng) = ((Wrd97.Lng) - (Wrd99.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd93.Lng)))
    goto label_168;
  (Wrd86.Obj) = (LONG_TO_FIXNUM (Wrd93.Lng));

DEFLABEL (label_167)
  (Wrd100.Obj) = (Rsp [5]);
  (Wrd101.pObj) = (OBJECT_ADDRESS (Wrd100.Obj));
  ((Wrd101.pObj) [0]) = (Wrd86.Obj);
  (Wrd110.Obj) = (Rsp [4]);
  (Wrd111.pObj) = (OBJECT_ADDRESS (Wrd110.Obj));
  (Wrd112.Obj) = ((Wrd111.pObj) [0]);
  (Wrd113.uLng) = (OBJECT_TYPE (Wrd112.Obj));
  if (! ((Wrd113.uLng) == 26))
    goto label_166;
  (Wrd114.Obj) = (Rsp [16]);
  (Wrd115.uLng) = (OBJECT_TYPE (Wrd114.Obj));
  if (! ((Wrd115.uLng) == 26))
    goto label_166;
  (Wrd120.Lng) = (FIXNUM_TO_LONG (Wrd112.Obj));
  (Wrd122.Lng) = (FIXNUM_TO_LONG (Wrd114.Obj));
  (Wrd116.Lng) = ((Wrd120.Lng) - (Wrd122.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd116.Lng)))
    goto label_166;
  (Wrd109.Obj) = (LONG_TO_FIXNUM (Wrd116.Lng));

DEFLABEL (label_165)
  (Wrd123.Obj) = (Rsp [4]);
  (Wrd124.pObj) = (OBJECT_ADDRESS (Wrd123.Obj));
  ((Wrd124.pObj) [0]) = (Wrd109.Obj);
  (Wrd132.Obj) = (Rsp [13]);
  (Wrd133.pObj) = (OBJECT_ADDRESS (Wrd132.Obj));
  (Wrd134.Obj) = ((Wrd133.pObj) [0]);
  (Wrd135.uLng) = (OBJECT_TYPE (Wrd134.Obj));
  if (! ((Wrd135.uLng) == 26))
    goto label_164;
  (Wrd140.Lng) = (FIXNUM_TO_LONG (Wrd134.Obj));
  (Wrd136.Lng) = ((Wrd140.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd136.Lng)))
    goto label_164;
  (Wrd131.Obj) = (LONG_TO_FIXNUM (Wrd136.Lng));

DEFLABEL (label_163)
  (Wrd141.Obj) = (Rsp [13]);
  (Wrd142.pObj) = (OBJECT_ADDRESS (Wrd141.Obj));
  ((Wrd142.pObj) [0]) = (Wrd131.Obj);
  goto find_real_end_loop_39;

DEFLABEL (label_164)
  (Wrd126.Obj) = (Rsp [13]);
  (Wrd127.pObj) = (OBJECT_ADDRESS (Wrd126.Obj));
  (Wrd125.Obj) = ((Wrd127.pObj) [0]);
  (Wrd130.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_47]))));
  (* (--Rsp)) = (Wrd130.Obj);
  (* (--Rsp)) = (Wrd125.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_101)
  (Wrd131.Obj) = Rvl;
  goto label_163;

DEFLABEL (label_166)
  (Wrd103.Obj) = (Rsp [4]);
  (Wrd104.pObj) = (OBJECT_ADDRESS (Wrd103.Obj));
  (Wrd102.Obj) = ((Wrd104.pObj) [0]);
  (Wrd105.Obj) = (Rsp [16]);
  (Wrd108.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_46]))));
  (* (--Rsp)) = (Wrd108.Obj);
  (* (--Rsp)) = (Wrd105.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_100)
  (Wrd109.Obj) = Rvl;
  goto label_165;

DEFLABEL (label_168)
  (Wrd80.Obj) = (Rsp [5]);
  (Wrd81.pObj) = (OBJECT_ADDRESS (Wrd80.Obj));
  (Wrd79.Obj) = ((Wrd81.pObj) [0]);
  (Wrd82.Obj) = (Rsp [15]);
  (Wrd85.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_45]))));
  (* (--Rsp)) = (Wrd85.Obj);
  (* (--Rsp)) = (Wrd82.Obj);
  (* (--Rsp)) = (Wrd79.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_99)
  (Wrd86.Obj) = Rvl;
  goto label_167;

DEFLABEL (label_170)
  (Wrd70.Obj) = (Rsp [13]);
  (Wrd71.pObj) = (OBJECT_ADDRESS (Wrd70.Obj));
  (Wrd69.Obj) = ((Wrd71.pObj) [0]);
  (Wrd73.Obj) = (Rsp [12]);
  (Wrd74.pObj) = (OBJECT_ADDRESS (Wrd73.Obj));
  (Wrd72.Obj) = ((Wrd74.pObj) [0]);
  (Wrd77.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_44]))));
  (* (--Rsp)) = (Wrd77.Obj);
  (* (--Rsp)) = (Wrd72.Obj);
  (* (--Rsp)) = (Wrd69.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_98)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_169;
  goto label_161;

DEFLABEL (fill_loop_111)
DEFLABEL (fill_loop_53)
  INTERRUPT_CHECK (26, LABEL_11_51);
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [5]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd9.Obj) = ((Wrd8.pObj) [0]);
  (Wrd10.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  if (! ((Wrd6.Lng) > (Wrd10.Lng)))
    goto label_171;
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [15]));
  goto pop_return;

DEFLABEL (label_171)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_52]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd16.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_53]))));
  (* (--Rsp)) = (Wrd16.Obj);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_54]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_55]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_11_54);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_61]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_55]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_11_61);
  (Wrd5.Obj) = Rvl;
  (Wrd17.Obj) = (Rsp [13]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_177;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_177;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd16.Lng))))
    goto label_177;
  (Wrd6.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.pObj) = (& ((Wrd14.pObj) [(Wrd6.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_176)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_67]));

DEFLABEL (continuation_48)
  INTERRUPT_CHECK (27, LABEL_11_53);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [12]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_60]));

DEFLABEL (continuation_49)
  INTERRUPT_CHECK (27, LABEL_11_52);
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 6))
    goto label_175;
  (Wrd11.Obj) = (Rsp [7]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 6))
    goto label_175;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd13.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd11.Obj));
  Dbl10 = (Dbl7 + Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd5.Obj));

DEFLABEL (label_174)
  (Rsp [0]) = (Wrd5.Obj);
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 6))
    goto label_173;
  (Wrd26.Obj) = (Rsp [8]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 6))
    goto label_173;
  Dbl22 = (FLONUM_TO_DOUBLE (Wrd28.Obj));
  Dbl24 = (FLONUM_TO_DOUBLE (Wrd26.Obj));
  Dbl25 = (Dbl22 + Dbl24);
  INLINE_DOUBLE_TO_FLONUM (Dbl25, (Wrd20.Obj));

DEFLABEL (label_172)
  (Rsp [1]) = (Wrd20.Obj);
  (Wrd36.Obj) = (Rsp [2]);
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd36.Obj));
  (Wrd38.Lng) = ((Wrd37.Lng) + 1L);
  (Wrd35.Obj) = (LONG_TO_FIXNUM (Wrd38.Lng));
  (Rsp [2]) = (Wrd35.Obj);
  goto fill_loop_53;

DEFLABEL (label_173)
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd31.Obj) = (Rsp [8]);
  (Wrd34.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_59]))));
  (* (--Rsp)) = (Wrd34.Obj);
  (* (--Rsp)) = (Wrd31.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_103)
  (Wrd20.Obj) = Rvl;
  goto label_172;

DEFLABEL (label_175)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [7]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_58]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_102)
  (Wrd5.Obj) = Rvl;
  goto label_174;

DEFLABEL (label_177)
  (Wrd19.Obj) = (Rsp [13]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_66]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_105)
  (* (--Rsp)) = Rvl;
  goto label_176;

DEFLABEL (fill_loop_112)
DEFLABEL (fill_loop_65)
  INTERRUPT_CHECK (26, LABEL_11_56);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_57]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [0]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_55]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_11_57);
  (Wrd5.Obj) = Rvl;
  (Wrd17.Obj) = (Rsp [13]);
  (Wrd18.uLng) = (OBJECT_TYPE (Wrd17.Obj));
  if (! ((Wrd18.uLng) == 10))
    goto label_182;
  (Wrd11.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd11.uLng) == 26))
    goto label_182;
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd17.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [0]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if (! (((unsigned long) (Wrd12.Lng)) < ((unsigned long) (Wrd16.Lng))))
    goto label_182;
  (Wrd6.uLng) = (OBJECT_DATUM (Rvl));
  (Wrd9.pObj) = (& ((Wrd14.pObj) [(Wrd6.Lng)]));
  (Wrd10.Obj) = ((Wrd9.pObj) [1]);
  (* (--Rsp)) = (Wrd10.Obj);

DEFLABEL (label_181)
  (Wrd24.Obj) = (Rsp [2]);
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Wrd24.Obj));
  (Wrd26.Obj) = (Rsp [9]);
  (Wrd27.pObj) = (OBJECT_ADDRESS (Wrd26.Obj));
  (Wrd28.Obj) = ((Wrd27.pObj) [0]);
  (Wrd29.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (! ((Wrd25.Lng) > (Wrd29.Lng)))
    goto label_178;
  Rvl = (current_block [OBJECT_11_0]);
  Rsp = (& (Rsp [19]));
  goto pop_return;

DEFLABEL (label_178)
  (Wrd32.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_63]))));
  (* (--Rsp)) = (Wrd32.Obj);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_64]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (Wrd38.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_65]))));
  (* (--Rsp)) = (Wrd38.Obj);
  (Wrd39.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd39.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_55]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_11_65);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_67]));

DEFLABEL (continuation_60)
  INTERRUPT_CHECK (27, LABEL_11_64);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_11_60]));

DEFLABEL (continuation_61)
  INTERRUPT_CHECK (27, LABEL_11_63);
  (Wrd13.Obj) = (Rsp [1]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if (! ((Wrd14.uLng) == 6))
    goto label_180;
  (Wrd11.Obj) = (Rsp [11]);
  (Wrd12.uLng) = (OBJECT_TYPE (Wrd11.Obj));
  if (! ((Wrd12.uLng) == 6))
    goto label_180;
  Dbl7 = (FLONUM_TO_DOUBLE (Wrd13.Obj));
  Dbl9 = (FLONUM_TO_DOUBLE (Wrd11.Obj));
  Dbl10 = (Dbl7 + Dbl9);
  INLINE_DOUBLE_TO_FLONUM (Dbl10, (Wrd5.Obj));

DEFLABEL (label_179)
  (Rsp [1]) = (Wrd5.Obj);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd21.Obj));
  (Wrd23.Lng) = ((Wrd22.Lng) + 1L);
  (Wrd20.Obj) = (LONG_TO_FIXNUM (Wrd23.Lng));
  (Rsp [2]) = (Wrd20.Obj);
  Rsp = (& (Rsp [1]));
  goto fill_loop_65;

DEFLABEL (label_180)
  (Wrd15.Obj) = (Rsp [1]);
  (Wrd16.Obj) = (Rsp [11]);
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_68]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (* (--Rsp)) = (Wrd16.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_1]), 2);

DEFLABEL (label_106)
  (Wrd5.Obj) = Rvl;
  goto label_179;

DEFLABEL (label_182)
  (Wrd19.Obj) = (Rsp [13]);
  (Wrd23.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11_62]))));
  (* (--Rsp)) = (Wrd23.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd19.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_11_2]), 2);

DEFLABEL (label_104)
  (* (--Rsp)) = Rvl;
  goto label_181;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_12_4 3
#define ENVIRONMENT_LABEL_12_3 6
#define DEBUGGING_LABEL_12_2 5
#define OBJECT_12_0 4
#define FREE_REFERENCES_LABEL_12_0 4
#define NUMBER_OF_LINKER_SECTIONS_12_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_12 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd19;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_12_4);
      goto point_in_picture_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (point_in_picture_7)
DEFLABEL (point_in_picture_4)
  INTERRUPT_CHECK (26, LABEL_12_4);
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  (Wrd7.Obj) = (Rsp [3]);
  (Wrd8.Lng) = (FIXNUM_TO_LONG (Wrd7.Obj));
  if ((Wrd6.Lng) > (Wrd8.Lng))
    goto label_9;
  (Wrd11.Obj) = (Rsp [2]);
  (Wrd12.Lng) = (FIXNUM_TO_LONG (Wrd11.Obj));
  if ((Wrd6.Lng) < (Wrd12.Lng))
    goto label_9;
  (Wrd13.Obj) = (Rsp [0]);
  (Wrd14.Lng) = (FIXNUM_TO_LONG (Wrd13.Obj));
  (Wrd15.Obj) = (Rsp [5]);
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  if ((Wrd14.Lng) > (Wrd16.Lng))
    goto label_9;
  (Wrd19.Obj) = (Rsp [4]);
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd19.Obj));
  if ((Wrd14.Lng) < (Wrd20.Lng))
    goto label_9;
  Rvl = (current_block [OBJECT_12_0]);
  goto label_8;

DEFLABEL (label_9)
  Rvl = ((SCHEME_OBJECT) 0);

DEFLABEL (label_8)
DEFLABEL (label_10)
  Rsp = (& (Rsp [6]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_13_4 3
#define LABEL_13_5 5
#define LABEL_13_7 7
#define LABEL_13_8 9
#define LABEL_13_9 11
#define LABEL_13_11 13
#define LABEL_13_12 15
#define LABEL_13_13 17
#define LABEL_13_16 19
#define LABEL_13_17 21
#define LABEL_13_18 23
#define LABEL_13_19 25
#define LABEL_13_23 27
#define LABEL_13_24 29
#define LABEL_13_25 31
#define LABEL_13_20 33
#define LABEL_13_21 35
#define LABEL_13_26 37
#define LABEL_13_28 39
#define LABEL_13_29 41
#define LABEL_13_31 43
#define LABEL_13_30 45
#define LABEL_13_33 47
#define LABEL_13_32 49
#define LABEL_13_34 51
#define LABEL_13_35 53
#define TAG_13_36 25
#define LABEL_13_37 55
#define LABEL_13_38 57
#define LABEL_13_39 59
#define LABEL_13_40 61
#define LABEL_13_42 63
#define LABEL_13_43 65
#define LABEL_13_44 67
#define LABEL_13_45 69
#define LABEL_13_46 71
#define LABEL_13_47 73
#define LABEL_13_48 75
#define LABEL_13_49 77
#define LABEL_13_51 79
#define LABEL_13_54 81
#define LABEL_13_55 83
#define LABEL_13_56 85
#define LABEL_13_57 87
#define LABEL_13_58 89
#define LABEL_13_59 91
#define LABEL_13_52 93
#define LABEL_13_53 95
#define LABEL_13_61 97
#define LABEL_13_64 99
#define LABEL_13_63 101
#define LABEL_13_69 103
#define LABEL_13_66 105
#define LABEL_13_73 107
#define LABEL_13_67 109
#define LABEL_13_68 111
#define LABEL_13_70 113
#define LABEL_13_71 115
#define LABEL_13_76 117
#define LABEL_13_72 119
#define ENVIRONMENT_LABEL_13_3 163
#define DEBUGGING_LABEL_13_2 162
#define OBJECT_13_5 161
#define OBJECT_13_4 160
#define OBJECT_13_3 159
#define OBJECT_13_2 158
#define OBJECT_13_1 157
#define OBJECT_13_0 156
#define EXECUTE_CACHE_13_78 121
#define EXECUTE_CACHE_13_77 123
#define EXECUTE_CACHE_13_75 125
#define EXECUTE_CACHE_13_74 127
#define EXECUTE_CACHE_13_65 129
#define EXECUTE_CACHE_13_62 131
#define EXECUTE_CACHE_13_60 133
#define EXECUTE_CACHE_13_50 135
#define EXECUTE_CACHE_13_41 137
#define EXECUTE_CACHE_13_27 139
#define EXECUTE_CACHE_13_22 141
#define EXECUTE_CACHE_13_15 143
#define EXECUTE_CACHE_13_14 145
#define EXECUTE_CACHE_13_10 147
#define EXECUTE_CACHE_13_6 149
#define FREE_REFERENCE_13_3 152
#define FREE_REFERENCE_13_2 153
#define FREE_REFERENCE_13_1 154
#define FREE_REFERENCE_13_0 155
#define FREE_REFERENCES_LABEL_13_0 120
#define NUMBER_OF_LINKER_SECTIONS_13_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_13 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd107;
  machine_word Wrd108;
  machine_word Wrd111;
  machine_word Wrd113;
  machine_word Wrd112;
  machine_word Wrd110;
  machine_word Wrd109;
  machine_word Wrd102;
  machine_word Wrd87;
  machine_word Wrd84;
  machine_word Wrd81;
  machine_word Wrd83;
  machine_word Wrd82;
  machine_word Wrd88;
  machine_word Wrd95;
  machine_word Wrd101;
  machine_word Wrd99;
  machine_word Wrd94;
  machine_word Wrd93;
  machine_word Wrd92;
  machine_word Wrd91;
  machine_word Wrd90;
  machine_word Wrd89;
  machine_word Wrd66;
  machine_word Wrd63;
  machine_word Wrd60;
  machine_word Wrd62;
  machine_word Wrd61;
  machine_word Wrd80;
  machine_word Wrd73;
  machine_word Wrd79;
  machine_word Wrd77;
  machine_word Wrd72;
  machine_word Wrd71;
  machine_word Wrd70;
  machine_word Wrd69;
  machine_word Wrd68;
  machine_word Wrd67;
  machine_word Wrd53;
  machine_word Wrd54;
  machine_word Wrd57;
  machine_word Wrd59;
  machine_word Wrd58;
  machine_word Wrd56;
  machine_word Wrd55;
  machine_word Wrd48;
  machine_word Wrd33;
  machine_word Wrd47;
  machine_word Wrd39;
  machine_word Wrd38;
  machine_word Wrd37;
  machine_word Wrd36;
  machine_word Wrd23;
  machine_word Wrd22;
  machine_word Wrd17;
  machine_word Wrd50;
  machine_word Wrd49;
  machine_word Wrd40;
  machine_word Wrd46;
  machine_word Wrd43;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd42;
  machine_word Wrd41;
  machine_word Wrd35;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd25;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd32;
  machine_word Wrd29;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd5;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd12;
  machine_word Wrd10;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_13_4);
      goto frame_mapping_info_84;

    case 1:
      current_block = (Rpc - LABEL_13_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_13_7);
      goto continuation_3;

    case 3:
      current_block = (Rpc - LABEL_13_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_13_9);
      goto continuation_1;

    case 5:
      current_block = (Rpc - LABEL_13_11);
      goto continuation_6;

    case 6:
      current_block = (Rpc - LABEL_13_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_13_13);
      goto continuation_4;

    case 8:
      current_block = (Rpc - LABEL_13_16);
      goto continuation_9;

    case 9:
      current_block = (Rpc - LABEL_13_17);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_13_18);
      goto continuation_7;

    case 11:
      current_block = (Rpc - LABEL_13_19);
      goto continuation_12;

    case 12:
      current_block = (Rpc - LABEL_13_23);
      goto label_86;

    case 13:
      current_block = (Rpc - LABEL_13_24);
      goto label_87;

    case 14:
      current_block = (Rpc - LABEL_13_25);
      goto label_88;

    case 15:
      current_block = (Rpc - LABEL_13_20);
      goto continuation_11;

    case 16:
      current_block = (Rpc - LABEL_13_21);
      goto continuation_10;

    case 17:
      current_block = (Rpc - LABEL_13_26);
      goto continuation_16;

    case 18:
      current_block = (Rpc - LABEL_13_28);
      goto label_89;

    case 19:
      current_block = (Rpc - LABEL_13_29);
      goto continuation_18;

    case 20:
      current_block = (Rpc - LABEL_13_31);
      goto label_90;

    case 21:
      current_block = (Rpc - LABEL_13_30);
      goto continuation_20;

    case 22:
      current_block = (Rpc - LABEL_13_33);
      goto label_91;

    case 23:
      current_block = (Rpc - LABEL_13_32);
      goto continuation_22;

    case 24:
      current_block = (Rpc - LABEL_13_34);
      goto continuation_23;

    case 25:
      current_block = (Rpc - LABEL_13_35);
      goto lambda_104;

    case 26:
      current_block = (Rpc - LABEL_13_37);
      goto continuation_47;

    case 27:
      current_block = (Rpc - LABEL_13_38);
      goto continuation_46;

    case 28:
      current_block = (Rpc - LABEL_13_39);
      goto continuation_45;

    case 29:
      current_block = (Rpc - LABEL_13_40);
      goto continuation_24;

    case 30:
      current_block = (Rpc - LABEL_13_42);
      goto continuation_42;

    case 31:
      current_block = (Rpc - LABEL_13_43);
      goto continuation_41;

    case 32:
      current_block = (Rpc - LABEL_13_44);
      goto continuation_43;

    case 33:
      current_block = (Rpc - LABEL_13_45);
      goto continuation_44;

    case 34:
      current_block = (Rpc - LABEL_13_46);
      goto continuation_25;

    case 35:
      current_block = (Rpc - LABEL_13_47);
      goto continuation_39;

    case 36:
      current_block = (Rpc - LABEL_13_48);
      goto continuation_38;

    case 37:
      current_block = (Rpc - LABEL_13_49);
      goto continuation_40;

    case 38:
      current_block = (Rpc - LABEL_13_51);
      goto continuation_26;

    case 39:
      current_block = (Rpc - LABEL_13_54);
      goto label_92;

    case 40:
      current_block = (Rpc - LABEL_13_55);
      goto label_93;

    case 41:
      current_block = (Rpc - LABEL_13_56);
      goto label_94;

    case 42:
      current_block = (Rpc - LABEL_13_57);
      goto label_95;

    case 43:
      current_block = (Rpc - LABEL_13_58);
      goto label_96;

    case 44:
      current_block = (Rpc - LABEL_13_59);
      goto label_97;

    case 45:
      current_block = (Rpc - LABEL_13_52);
      goto continuation_36;

    case 46:
      current_block = (Rpc - LABEL_13_53);
      goto continuation_37;

    case 47:
      current_block = (Rpc - LABEL_13_61);
      goto continuation_52;

    case 48:
      current_block = (Rpc - LABEL_13_64);
      goto label_98;

    case 49:
      current_block = (Rpc - LABEL_13_63);
      goto continuation_53;

    case 50:
      current_block = (Rpc - LABEL_13_69);
      goto label_99;

    case 51:
      current_block = (Rpc - LABEL_13_66);
      goto continuation_56;

    case 52:
      current_block = (Rpc - LABEL_13_73);
      goto label_100;

    case 53:
      current_block = (Rpc - LABEL_13_67);
      goto continuation_55;

    case 54:
      current_block = (Rpc - LABEL_13_68);
      goto continuation_54;

    case 55:
      current_block = (Rpc - LABEL_13_70);
      goto continuation_59;

    case 56:
      current_block = (Rpc - LABEL_13_71);
      goto continuation_58;

    case 57:
      current_block = (Rpc - LABEL_13_76);
      goto label_101;

    case 58:
      current_block = (Rpc - LABEL_13_72);
      goto continuation_57;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_mapping_info_103)
DEFLABEL (frame_mapping_info_84)
  INTERRUPT_CHECK (26, LABEL_13_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_13_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_8]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_9]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_13_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_13_8);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_3)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_12]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_13]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [8]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_13_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_13_12);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_6)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_17]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_18]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_13_18);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13_17);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_9)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_20]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_21]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (Rsp [10]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_13_21);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_13_20);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_12)
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [1]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_123;
  (Wrd12.Obj) = (Rsp [2]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_123;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  if (multiply_with_overflow ((Wrd16.Lng), (Wrd18.Lng), (& (Wrd14.Lng))))
    goto label_123;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_122)
  (Wrd26.Obj) = (Rsp [4]);
  (Wrd27.uLng) = (OBJECT_TYPE (Wrd26.Obj));
  if (! ((Wrd27.uLng) == 26))
    goto label_121;
  (Wrd28.Obj) = (Rsp [1]);
  (Wrd29.uLng) = (OBJECT_TYPE (Wrd28.Obj));
  if (! ((Wrd29.uLng) == 26))
    goto label_121;
  (Wrd32.Lng) = (FIXNUM_TO_LONG (Wrd26.Obj));
  (Wrd34.Lng) = (FIXNUM_TO_LONG (Wrd28.Obj));
  if (multiply_with_overflow ((Wrd32.Lng), (Wrd34.Lng), (& (Wrd30.Lng))))
    goto label_121;
  (Wrd25.Obj) = (LONG_TO_FIXNUM (Wrd30.Lng));

DEFLABEL (label_120)
  (Wrd35.Obj) = (* (Rsp++));
  (Wrd41.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd41.uLng) == 26))
    goto label_119;
  (Wrd42.uLng) = (OBJECT_TYPE (Wrd35.Obj));
  if (! ((Wrd42.uLng) == 26))
    goto label_119;
  (Wrd44.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd35.Obj));
  (Wrd43.Lng) = ((Wrd44.Lng) - (Wrd45.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd43.Lng)))
    goto label_119;
  (Wrd46.Obj) = (LONG_TO_FIXNUM (Wrd43.Lng));
  (* (--Rsp)) = (Wrd46.Obj);

DEFLABEL (label_118)
  (Wrd49.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_26]))));
  (* (--Rsp)) = (Wrd49.Obj);
  (Wrd50.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd50.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_27]));

DEFLABEL (continuation_16)
  INTERRUPT_CHECK (27, LABEL_13_26);
  (Wrd8.Obj) = (current_block [OBJECT_13_0]);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_28]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (37);

DEFLABEL (label_89)
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_105;
  (Wrd17.Obj) = (current_block [OBJECT_13_1]);
  (Wrd18.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd15.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd15.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

DEFLABEL (label_105)
  (Wrd21.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_29]))));
  (* (--Rsp)) = (Wrd21.Obj);
  (Wrd22.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd23.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd23.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_18)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_30]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [5]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_117;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = (0 - (Wrd20.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_117;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_116)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_20)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_32]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd14.Obj) = (Rsp [7]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if (! ((Wrd15.uLng) == 26))
    goto label_115;
  (Wrd20.Lng) = (FIXNUM_TO_LONG (Wrd14.Obj));
  (Wrd16.Lng) = (0 - (Wrd20.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd16.Lng)))
    goto label_115;
  (Wrd21.Obj) = (LONG_TO_FIXNUM (Wrd16.Lng));
  (* (--Rsp)) = (Wrd21.Obj);

DEFLABEL (label_114)
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_22)
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_34]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [9]);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_23)
  (* (--Rsp)) = Rvl;
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 8));
  (Wrd7.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_13_36);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_13_35])));
  Rhp += 5;
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd7.pObj)));
  Wrd16 = Wrd7;
  (Wrd17.Obj) = (Rsp [9]);
  ((Wrd16.pObj) [2]) = (Wrd17.Obj);
  (Wrd15.Obj) = (Rsp [3]);
  ((Wrd16.pObj) [3]) = (Wrd15.Obj);
  (Wrd13.Obj) = (Rsp [2]);
  ((Wrd16.pObj) [4]) = (Wrd13.Obj);
  (Wrd11.Obj) = (Rsp [1]);
  ((Wrd16.pObj) [5]) = (Wrd11.Obj);
  ((Wrd16.pObj) [6]) = Rvl;
  (Rsp [1]) = (Wrd6.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd18.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd18.Obj);
  (Wrd19.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_37]))));
  (* (--Rsp)) = (Wrd22.Obj);
  (Wrd25.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_38]))));
  (* (--Rsp)) = (Wrd25.Obj);
  (Wrd28.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_39]))));
  (* (--Rsp)) = (Wrd28.Obj);
  (Wrd29.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd29.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_45)
  INTERRUPT_CHECK (27, LABEL_13_39);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_45]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [17]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_44)
  INTERRUPT_CHECK (27, LABEL_13_45);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_50]));

DEFLABEL (continuation_46)
  INTERRUPT_CHECK (27, LABEL_13_38);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_44]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_43)
  INTERRUPT_CHECK (27, LABEL_13_44);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_50]));

DEFLABEL (continuation_47)
  INTERRUPT_CHECK (27, LABEL_13_37);
  (Wrd9.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_42]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_43]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_14]));

DEFLABEL (continuation_41)
  INTERRUPT_CHECK (27, LABEL_13_43);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_49]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [17]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_40)
  INTERRUPT_CHECK (27, LABEL_13_49);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_50]));

DEFLABEL (continuation_42)
  INTERRUPT_CHECK (27, LABEL_13_42);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_47]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_48]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [16]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_10]));

DEFLABEL (continuation_38)
  INTERRUPT_CHECK (27, LABEL_13_48);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_53]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [17]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_37)
  INTERRUPT_CHECK (27, LABEL_13_53);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_50]));

DEFLABEL (continuation_39)
  INTERRUPT_CHECK (27, LABEL_13_47);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_52]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [15]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_6]));

DEFLABEL (continuation_36)
  INTERRUPT_CHECK (27, LABEL_13_52);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_61]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_62]));

DEFLABEL (continuation_52)
  INTERRUPT_CHECK (27, LABEL_13_61);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_63]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_113;
  Wrd9 = Wrd13;

DEFLABEL (label_112)
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_65]));

DEFLABEL (continuation_53)
  INTERRUPT_CHECK (27, LABEL_13_63);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_66]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_67]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_68]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_1]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_111;
  Wrd15 = Wrd19;

DEFLABEL (label_110)
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (continuation_54)
  INTERRUPT_CHECK (27, LABEL_13_68);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_75]));

DEFLABEL (continuation_55)
  INTERRUPT_CHECK (27, LABEL_13_67);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_13_3]);
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_74]));

DEFLABEL (continuation_56)
  INTERRUPT_CHECK (27, LABEL_13_66);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_70]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_71]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_72]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (Wrd14.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd16.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_2]));
  (Wrd19.Obj) = ((Wrd16.pObj) [0]);
  (Wrd20.uLng) = (OBJECT_TYPE (Wrd19.Obj));
  if ((Wrd20.uLng) == 50)
    goto label_109;
  Wrd15 = Wrd19;

DEFLABEL (label_108)
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_13_4]), 2);

DEFLABEL (continuation_57)
  INTERRUPT_CHECK (27, LABEL_13_72);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_78]));

DEFLABEL (continuation_58)
  INTERRUPT_CHECK (27, LABEL_13_71);
  (* (--Rsp)) = Rvl;
  (Wrd6.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_13_3]));
  (Wrd9.Obj) = ((Wrd6.pObj) [0]);
  (Wrd10.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if ((Wrd10.uLng) == 50)
    goto label_107;
  Wrd5 = Wrd9;

DEFLABEL (label_106)
  (* (--Rsp)) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_77]));

DEFLABEL (continuation_59)
  INTERRUPT_CHECK (27, LABEL_13_70);
  (* (--Rsp)) = Rvl;
  (Wrd8.Obj) = (Rsp [7]);
  (Wrd9.Obj) = (current_block [OBJECT_13_2]);
  (* (Rhp++)) = (Wrd8.Obj);
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd21.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd21.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  (Wrd25.Obj) = (Rsp [5]);
  (* (Rhp++)) = (Wrd25.Obj);
  (* (Rhp++)) = (Wrd18.Obj);
  (Wrd24.pObj) = (& (Rhp [-2]));
  (Wrd22.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd24.pObj)));
  (Wrd29.Obj) = (Rsp [6]);
  (* (Rhp++)) = (Wrd29.Obj);
  (* (Rhp++)) = (Wrd22.Obj);
  (Wrd28.pObj) = (& (Rhp [-2]));
  (Wrd26.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd28.pObj)));
  (Wrd34.Obj) = (current_block [OBJECT_13_5]);
  (* (Rhp++)) = (Wrd34.Obj);
  (* (Rhp++)) = (Wrd26.Obj);
  (Wrd32.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd32.pObj)));
  Rsp = (& (Rsp [19]));
  goto pop_return;

DEFLABEL (label_107)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_76])), (Wrd6.pObj));

DEFLABEL (label_101)
  (Wrd5.Obj) = Rvl;
  goto label_106;

DEFLABEL (label_109)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_73])), (Wrd16.pObj));

DEFLABEL (label_100)
  (Wrd15.Obj) = Rvl;
  goto label_108;

DEFLABEL (label_111)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_69])), (Wrd16.pObj));

DEFLABEL (label_99)
  (Wrd15.Obj) = Rvl;
  goto label_110;

DEFLABEL (label_113)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_13_64])), (Wrd10.pObj));

DEFLABEL (label_98)
  (Wrd9.Obj) = Rvl;
  goto label_112;

DEFLABEL (label_115)
  (Wrd9.Obj) = (current_block [OBJECT_13_3]);
  (Wrd10.Obj) = (Rsp [7]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_33]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_91)
  (* (--Rsp)) = Rvl;
  goto label_114;

DEFLABEL (label_117)
  (Wrd9.Obj) = (current_block [OBJECT_13_3]);
  (Wrd10.Obj) = (Rsp [5]);
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_31]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_90)
  (* (--Rsp)) = Rvl;
  goto label_116;

DEFLABEL (label_119)
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_25]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd25.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_88)
  (* (--Rsp)) = Rvl;
  goto label_118;

DEFLABEL (label_121)
  (Wrd20.Obj) = (Rsp [4]);
  (Wrd21.Obj) = (Rsp [1]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_24]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_87)
  (Wrd25.Obj) = Rvl;
  goto label_120;

DEFLABEL (label_123)
  (Wrd5.Obj) = (Rsp [1]);
  (Wrd6.Obj) = (Rsp [2]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_23]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_86)
  (* (--Rsp)) = Rvl;
  goto label_122;

DEFLABEL (lambda_104)
  CLOSURE_HEADER (LABEL_13_35);

DEFLABEL (lambda_35)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_40]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (Wrd9.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd10.Obj) = ((Wrd9.pObj) [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_41]));

DEFLABEL (continuation_24)
  INTERRUPT_CHECK (27, LABEL_13_40);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_46]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_15]));

DEFLABEL (continuation_25)
  INTERRUPT_CHECK (27, LABEL_13_46);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_51]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_22]));

DEFLABEL (continuation_26)
  INTERRUPT_CHECK (27, LABEL_13_51);
  (Rsp [1]) = Rvl;
  (Wrd13.Obj) = (Rsp [2]);
  (Wrd14.pObj) = (OBJECT_ADDRESS (Wrd13.Obj));
  (Wrd15.Obj) = ((Wrd14.pObj) [6]);
  (Wrd16.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd16.uLng) == 26))
    goto label_135;
  (Wrd18.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd18.uLng) == 26))
    goto label_135;
  (Wrd23.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd25.Lng) = (FIXNUM_TO_LONG (Rvl));
  if (multiply_with_overflow ((Wrd23.Lng), (Wrd25.Lng), (& (Wrd19.Lng))))
    goto label_135;
  (Wrd26.Obj) = (LONG_TO_FIXNUM (Wrd19.Lng));
  (* (--Rsp)) = (Wrd26.Obj);

DEFLABEL (label_134)
  (Wrd35.Obj) = (Rsp [3]);
  (Wrd36.pObj) = (OBJECT_ADDRESS (Wrd35.Obj));
  (Wrd37.Obj) = ((Wrd36.pObj) [4]);
  (Wrd38.uLng) = (OBJECT_TYPE (Wrd37.Obj));
  if (! ((Wrd38.uLng) == 26))
    goto label_133;
  (Wrd39.Obj) = (Rsp [1]);
  (Wrd40.uLng) = (OBJECT_TYPE (Wrd39.Obj));
  if (! ((Wrd40.uLng) == 26))
    goto label_133;
  (Wrd45.Lng) = (FIXNUM_TO_LONG (Wrd37.Obj));
  (Wrd47.Lng) = (FIXNUM_TO_LONG (Wrd39.Obj));
  if (multiply_with_overflow ((Wrd45.Lng), (Wrd47.Lng), (& (Wrd41.Lng))))
    goto label_133;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd41.Lng));

DEFLABEL (label_132)
  (Wrd48.Obj) = (* (Rsp++));
  (Wrd55.uLng) = (OBJECT_TYPE (Wrd34.Obj));
  if (! ((Wrd55.uLng) == 26))
    goto label_131;
  (Wrd56.uLng) = (OBJECT_TYPE (Wrd48.Obj));
  if (! ((Wrd56.uLng) == 26))
    goto label_131;
  (Wrd58.Lng) = (FIXNUM_TO_LONG (Wrd34.Obj));
  (Wrd59.Lng) = (FIXNUM_TO_LONG (Wrd48.Obj));
  (Wrd57.Lng) = ((Wrd58.Lng) + (Wrd59.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd57.Lng)))
    goto label_131;
  (Wrd54.Obj) = (LONG_TO_FIXNUM (Wrd57.Lng));

DEFLABEL (label_130)
  (Rsp [3]) = (Wrd54.Obj);
  (Wrd67.Obj) = (Rsp [2]);
  (Wrd68.pObj) = (OBJECT_ADDRESS (Wrd67.Obj));
  (Wrd69.Obj) = ((Wrd68.pObj) [5]);
  (Wrd70.uLng) = (OBJECT_TYPE (Wrd69.Obj));
  if (! ((Wrd70.uLng) == 26))
    goto label_129;
  (Wrd71.Obj) = (Rsp [1]);
  (Wrd72.uLng) = (OBJECT_TYPE (Wrd71.Obj));
  if (! ((Wrd72.uLng) == 26))
    goto label_129;
  (Wrd77.Lng) = (FIXNUM_TO_LONG (Wrd69.Obj));
  (Wrd79.Lng) = (FIXNUM_TO_LONG (Wrd71.Obj));
  if (multiply_with_overflow ((Wrd77.Lng), (Wrd79.Lng), (& (Wrd73.Lng))))
    goto label_129;
  (Wrd80.Obj) = (LONG_TO_FIXNUM (Wrd73.Lng));
  (* (--Rsp)) = (Wrd80.Obj);

DEFLABEL (label_128)
  (Wrd89.Obj) = (Rsp [3]);
  (Wrd90.pObj) = (OBJECT_ADDRESS (Wrd89.Obj));
  (Wrd91.Obj) = ((Wrd90.pObj) [3]);
  (Wrd92.uLng) = (OBJECT_TYPE (Wrd91.Obj));
  if (! ((Wrd92.uLng) == 26))
    goto label_127;
  (Wrd93.Obj) = (Rsp [1]);
  (Wrd94.uLng) = (OBJECT_TYPE (Wrd93.Obj));
  if (! ((Wrd94.uLng) == 26))
    goto label_127;
  (Wrd99.Lng) = (FIXNUM_TO_LONG (Wrd91.Obj));
  (Wrd101.Lng) = (FIXNUM_TO_LONG (Wrd93.Obj));
  if (multiply_with_overflow ((Wrd99.Lng), (Wrd101.Lng), (& (Wrd95.Lng))))
    goto label_127;
  (Wrd88.Obj) = (LONG_TO_FIXNUM (Wrd95.Lng));

DEFLABEL (label_126)
  (Wrd102.Obj) = (* (Rsp++));
  (Wrd109.uLng) = (OBJECT_TYPE (Wrd88.Obj));
  if (! ((Wrd109.uLng) == 26))
    goto label_125;
  (Wrd110.uLng) = (OBJECT_TYPE (Wrd102.Obj));
  if (! ((Wrd110.uLng) == 26))
    goto label_125;
  (Wrd112.Lng) = (FIXNUM_TO_LONG (Wrd88.Obj));
  (Wrd113.Lng) = (FIXNUM_TO_LONG (Wrd102.Obj));
  (Wrd111.Lng) = ((Wrd112.Lng) + (Wrd113.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd111.Lng)))
    goto label_125;
  (Wrd108.Obj) = (LONG_TO_FIXNUM (Wrd111.Lng));

DEFLABEL (label_124)
  (Rsp [2]) = (Wrd108.Obj);
  Rsp = (& (Rsp [2]));
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_13_60]));

DEFLABEL (label_125)
  (Wrd107.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_59]))));
  (* (--Rsp)) = (Wrd107.Obj);
  (* (--Rsp)) = (Wrd102.Obj);
  (* (--Rsp)) = (Wrd88.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_97)
  (Wrd108.Obj) = Rvl;
  goto label_124;

DEFLABEL (label_127)
  (Wrd82.Obj) = (Rsp [3]);
  (Wrd83.pObj) = (OBJECT_ADDRESS (Wrd82.Obj));
  (Wrd81.Obj) = ((Wrd83.pObj) [3]);
  (Wrd84.Obj) = (Rsp [1]);
  (Wrd87.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_58]))));
  (* (--Rsp)) = (Wrd87.Obj);
  (* (--Rsp)) = (Wrd84.Obj);
  (* (--Rsp)) = (Wrd81.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_96)
  (Wrd88.Obj) = Rvl;
  goto label_126;

DEFLABEL (label_129)
  (Wrd61.Obj) = (Rsp [2]);
  (Wrd62.pObj) = (OBJECT_ADDRESS (Wrd61.Obj));
  (Wrd60.Obj) = ((Wrd62.pObj) [5]);
  (Wrd63.Obj) = (Rsp [1]);
  (Wrd66.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_57]))));
  (* (--Rsp)) = (Wrd66.Obj);
  (* (--Rsp)) = (Wrd63.Obj);
  (* (--Rsp)) = (Wrd60.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_95)
  (* (--Rsp)) = Rvl;
  goto label_128;

DEFLABEL (label_131)
  (Wrd53.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_56]))));
  (* (--Rsp)) = (Wrd53.Obj);
  (* (--Rsp)) = (Wrd48.Obj);
  (* (--Rsp)) = (Wrd34.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_94)
  (Wrd54.Obj) = Rvl;
  goto label_130;

DEFLABEL (label_133)
  (Wrd28.Obj) = (Rsp [3]);
  (Wrd29.pObj) = (OBJECT_ADDRESS (Wrd28.Obj));
  (Wrd27.Obj) = ((Wrd29.pObj) [4]);
  (Wrd30.Obj) = (Rsp [1]);
  (Wrd33.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_55]))));
  (* (--Rsp)) = (Wrd33.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd27.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_93)
  (Wrd34.Obj) = Rvl;
  goto label_132;

DEFLABEL (label_135)
  (Wrd7.Obj) = (Rsp [2]);
  (Wrd8.pObj) = (OBJECT_ADDRESS (Wrd7.Obj));
  (Wrd6.Obj) = ((Wrd8.pObj) [6]);
  (Wrd9.Obj) = (Rsp [1]);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13_54]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_92)
  (* (--Rsp)) = Rvl;
  goto label_134;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_14_4 3
#define LABEL_14_5 5
#define ENVIRONMENT_LABEL_14_3 10
#define DEBUGGING_LABEL_14_2 9
#define OBJECT_14_2 8
#define OBJECT_14_1 7
#define OBJECT_14_0 6
#define FREE_REFERENCES_LABEL_14_0 6
#define NUMBER_OF_LINKER_SECTIONS_14_1 0

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_14 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd7;
  machine_word Wrd9;
  machine_word Wrd8;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_14_4);
      goto degenerateP_1;

    case 1:
      current_block = (Rpc - LABEL_14_5);
      goto label_3;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (degenerateP_5)
DEFLABEL (degenerateP_1)
  INTERRUPT_CHECK (26, LABEL_14_4);
  (Wrd8.Obj) = (Rsp [0]);
  (Wrd9.uLng) = (OBJECT_TYPE (Wrd8.Obj));
  if (! ((Wrd9.uLng) == 1))
    goto label_10;
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd8.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [0]);

DEFLABEL (label_9)
  if ((Wrd5.Obj) == (current_block [OBJECT_14_1]))
    goto label_7;
  Rvl = ((SCHEME_OBJECT) 0);
  goto label_6;

DEFLABEL (label_7)
  Rvl = (current_block [OBJECT_14_2]);

DEFLABEL (label_6)
DEFLABEL (label_8)
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_10)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_14_5]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_14_0]), 1);

DEFLABEL (label_3)
  (Wrd5.Obj) = Rvl;
  goto label_9;

INVOKE_INTERFACE_TARGET_1
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_15_4 3
#define ENVIRONMENT_LABEL_15_3 9
#define DEBUGGING_LABEL_15_2 8
#define OBJECT_15_0 7
#define EXECUTE_CACHE_15_5 5
#define FREE_REFERENCES_LABEL_15_0 4
#define NUMBER_OF_LINKER_SECTIONS_15_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_15 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_15_4);
      goto frame_map_x_step_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_map_x_step_3)
DEFLABEL (frame_map_x_step_0)
  INTERRUPT_CHECK (26, LABEL_15_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_15_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_15_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_16_4 3
#define ENVIRONMENT_LABEL_16_3 9
#define DEBUGGING_LABEL_16_2 8
#define OBJECT_16_0 7
#define EXECUTE_CACHE_16_5 5
#define FREE_REFERENCES_LABEL_16_0 4
#define NUMBER_OF_LINKER_SECTIONS_16_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_16 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_16_4);
      goto frame_map_y_step_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_map_y_step_3)
DEFLABEL (frame_map_y_step_0)
  INTERRUPT_CHECK (26, LABEL_16_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_16_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_16_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_17_4 3
#define ENVIRONMENT_LABEL_17_3 9
#define DEBUGGING_LABEL_17_2 8
#define OBJECT_17_0 7
#define EXECUTE_CACHE_17_5 5
#define FREE_REFERENCES_LABEL_17_0 4
#define NUMBER_OF_LINKER_SECTIONS_17_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_17 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_17_4);
      goto frame_map_segments_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_map_segments_3)
DEFLABEL (frame_map_segments_0)
  INTERRUPT_CHECK (26, LABEL_17_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_17_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_17_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_18_4 3
#define ENVIRONMENT_LABEL_18_3 9
#define DEBUGGING_LABEL_18_2 8
#define OBJECT_18_0 7
#define EXECUTE_CACHE_18_5 5
#define FREE_REFERENCES_LABEL_18_0 4
#define NUMBER_OF_LINKER_SECTIONS_18_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_18 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_18_4);
      goto frame_map_lowest_row_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_map_lowest_row_3)
DEFLABEL (frame_map_lowest_row_0)
  INTERRUPT_CHECK (26, LABEL_18_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_18_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_18_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_19_4 3
#define ENVIRONMENT_LABEL_19_3 9
#define DEBUGGING_LABEL_19_2 8
#define OBJECT_19_0 7
#define EXECUTE_CACHE_19_5 5
#define FREE_REFERENCES_LABEL_19_0 4
#define NUMBER_OF_LINKER_SECTIONS_19_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_19 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_19_4);
      goto frame_map_highest_row_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_map_highest_row_3)
DEFLABEL (frame_map_highest_row_0)
  INTERRUPT_CHECK (26, LABEL_19_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_19_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_19_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_20_4 3
#define ENVIRONMENT_LABEL_20_3 9
#define DEBUGGING_LABEL_20_2 8
#define OBJECT_20_0 7
#define EXECUTE_CACHE_20_5 5
#define FREE_REFERENCES_LABEL_20_0 4
#define NUMBER_OF_LINKER_SECTIONS_20_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_20 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_20_4);
      goto frame_map_inv_map_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (frame_map_inv_map_3)
DEFLABEL (frame_map_inv_map_0)
  INTERRUPT_CHECK (26, LABEL_20_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_20_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_20_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_21_4 3
#define LABEL_21_5 5
#define LABEL_21_7 7
#define LABEL_21_8 9
#define LABEL_21_9 11
#define LABEL_21_10 13
#define LABEL_21_12 15
#define LABEL_21_13 17
#define LABEL_21_14 19
#define ENVIRONMENT_LABEL_21_3 31
#define DEBUGGING_LABEL_21_2 30
#define OBJECT_21_4 29
#define OBJECT_21_3 28
#define OBJECT_21_2 27
#define OBJECT_21_1 26
#define OBJECT_21_0 25
#define EXECUTE_CACHE_21_11 21
#define EXECUTE_CACHE_21_6 23
#define FREE_REFERENCES_LABEL_21_0 20
#define NUMBER_OF_LINKER_SECTIONS_21_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_21 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd20;
  machine_word Wrd22;
  machine_word Wrd14;
  machine_word Wrd16;
  machine_word Wrd17;
  machine_word Wrd10;
  machine_word Wrd12;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd9;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_21_4);
      goto points__segment_checks_19;

    case 1:
      current_block = (Rpc - LABEL_21_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_21_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_21_8);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_21_9);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_21_10);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_21_12);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_21_13);
      goto continuation_6;

    case 8:
      current_block = (Rpc - LABEL_21_14);
      goto continuation_7;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (points__segment_checks_22)
DEFLABEL (points__segment_checks_19)
  INTERRUPT_CHECK (26, LABEL_21_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_0]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_21_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_1]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_21_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_21_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_21_3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_6]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_21_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_21_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_21_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_21_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_21_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_21_11]));

DEFLABEL (continuation_7)
  INTERRUPT_CHECK (27, LABEL_21_14);
  (* (--Rsp)) = Rvl;
  (Wrd9.Obj) = (current_block [OBJECT_21_4]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd5.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (Wrd13.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd13.Obj);
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd12.pObj) = (& (Rhp [-2]));
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd12.pObj)));
  (Wrd17.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd17.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd16.pObj) = (& (Rhp [-2]));
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd16.pObj)));
  (Wrd22.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd14.Obj);
  (Wrd20.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd20.pObj)));
  Rsp = (& (Rsp [9]));
  goto pop_return;

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_22_4 3
#define LABEL_22_5 5
#define LABEL_22_7 7
#define LABEL_22_8 9
#define LABEL_22_9 11
#define LABEL_22_10 13
#define LABEL_22_12 15
#define LABEL_22_13 17
#define LABEL_22_14 19
#define LABEL_22_15 21
#define LABEL_22_16 23
#define LABEL_22_18 25
#define LABEL_22_20 27
#define LABEL_22_17 29
#define ENVIRONMENT_LABEL_22_3 40
#define DEBUGGING_LABEL_22_2 39
#define OBJECT_22_1 38
#define OBJECT_22_0 37
#define EXECUTE_CACHE_22_19 31
#define EXECUTE_CACHE_22_11 33
#define EXECUTE_CACHE_22_6 35
#define FREE_REFERENCES_LABEL_22_0 30
#define NUMBER_OF_LINKER_SECTIONS_22_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_22 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd22;
  machine_word Wrd38;
  machine_word Wrd35;
  machine_word Wrd32;
  machine_word Wrd41;
  machine_word Wrd40;
  machine_word Wrd37;
  machine_word Wrd24;
  machine_word Wrd21;
  machine_word Wrd20;
  machine_word Wrd34;
  machine_word Wrd29;
  machine_word Wrd33;
  machine_word Wrd31;
  machine_word Wrd28;
  machine_word Wrd27;
  machine_word Wrd26;
  machine_word Wrd25;
  machine_word Wrd9;
  machine_word Wrd19;
  machine_word Wrd14;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd13;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_22_4);
      goto make_segment_check_24;

    case 1:
      current_block = (Rpc - LABEL_22_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_22_7);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_22_8);
      goto label_26;

    case 4:
      current_block = (Rpc - LABEL_22_9);
      goto make_seg_23;

    case 5:
      current_block = (Rpc - LABEL_22_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_22_12);
      goto continuation_4;

    case 7:
      current_block = (Rpc - LABEL_22_13);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_22_14);
      goto continuation_6;

    case 9:
      current_block = (Rpc - LABEL_22_15);
      goto label_27;

    case 10:
      current_block = (Rpc - LABEL_22_16);
      goto label_28;

    case 11:
      current_block = (Rpc - LABEL_22_18);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_22_20);
      goto label_29;

    case 13:
      current_block = (Rpc - LABEL_22_17);
      goto continuation_11;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_segment_check_31)
DEFLABEL (make_segment_check_24)
  INTERRUPT_CHECK (26, LABEL_22_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_22_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_22_7);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_35;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_35;
  (Wrd17.Lng) = (FIXNUM_TO_LONG (Rvl));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd5.Obj));
  if ((Wrd17.Lng) < (Wrd18.Lng))
    goto label_33;

DEFLABEL (label_34)
  (Wrd15.Obj) = (Rsp [0]);
  (Wrd16.Obj) = (Rsp [1]);
  (Rsp [0]) = (Wrd16.Obj);
  (Rsp [1]) = (Wrd15.Obj);

DEFLABEL (label_33)
  goto make_seg_23;

DEFLABEL (label_35)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_8]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_34;
  goto label_33;

DEFLABEL (make_seg_32)
DEFLABEL (make_seg_23)
  INTERRUPT_CHECK (26, LABEL_22_9);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_10]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_22_10);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_11]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_22_12);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_22_13);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_14]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_6]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_22_14);
  (* (--Rsp)) = Rvl;
  (Wrd10.Obj) = (Rsp [2]);
  (Wrd11.uLng) = (OBJECT_TYPE (Wrd10.Obj));
  if (! ((Wrd11.uLng) == 26))
    goto label_41;
  (Wrd12.Obj) = (Rsp [3]);
  (Wrd13.uLng) = (OBJECT_TYPE (Wrd12.Obj));
  if (! ((Wrd13.uLng) == 26))
    goto label_41;
  (Wrd16.Lng) = (FIXNUM_TO_LONG (Wrd10.Obj));
  (Wrd18.Lng) = (FIXNUM_TO_LONG (Wrd12.Obj));
  (Wrd14.Lng) = ((Wrd16.Lng) - (Wrd18.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd14.Lng)))
    goto label_41;
  (Wrd19.Obj) = (LONG_TO_FIXNUM (Wrd14.Lng));
  (* (--Rsp)) = (Wrd19.Obj);

DEFLABEL (label_40)
  (Wrd25.Obj) = (Rsp [1]);
  (Wrd26.uLng) = (OBJECT_TYPE (Wrd25.Obj));
  if (! ((Wrd26.uLng) == 26))
    goto label_39;
  (Wrd27.Obj) = (Rsp [2]);
  (Wrd28.uLng) = (OBJECT_TYPE (Wrd27.Obj));
  if (! ((Wrd28.uLng) == 26))
    goto label_39;
  (Wrd31.Lng) = (FIXNUM_TO_LONG (Wrd25.Obj));
  (Wrd33.Lng) = (FIXNUM_TO_LONG (Wrd27.Obj));
  (Wrd29.Lng) = ((Wrd31.Lng) - (Wrd33.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd29.Lng)))
    goto label_39;
  (Wrd34.Obj) = (LONG_TO_FIXNUM (Wrd29.Lng));
  (* (--Rsp)) = (Wrd34.Obj);

DEFLABEL (label_38)
  (Wrd37.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_17]))));
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd40.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_18]))));
  (* (--Rsp)) = (Wrd40.Obj);
  (Wrd41.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd41.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_22_19]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_22_18);
  (Wrd32.Obj) = (current_block [OBJECT_22_0]);
  (Wrd35.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_20]))));
  (* (--Rsp)) = (Wrd35.Obj);
  (* (--Rsp)) = (Wrd32.Obj);
  (* (--Rsp)) = Rvl;
  INVOKE_INTERFACE_0 (39);

DEFLABEL (label_29)
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_37;
  (Wrd37.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd37.Obj);
  (Wrd38.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (35);

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_22_17);
  (Wrd5.Obj) = Rvl;

DEFLABEL (label_36)
  (Rsp [1]) = (Wrd5.Obj);
  Rsp = (& (Rsp [1]));
  (Wrd9.Obj) = (Rsp [0]);
  (Wrd10.Obj) = (current_block [OBJECT_22_1]);
  (* (Rhp++)) = (Wrd9.Obj);
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd14.Obj) = (Rsp [1]);
  (* (Rhp++)) = (Wrd14.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  (Wrd18.Obj) = (Rsp [2]);
  (* (Rhp++)) = (Wrd18.Obj);
  (* (Rhp++)) = (Wrd11.Obj);
  (Wrd17.pObj) = (& (Rhp [-2]));
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd17.pObj)));
  (Wrd22.Obj) = (Rsp [3]);
  (* (Rhp++)) = (Wrd22.Obj);
  (* (Rhp++)) = (Wrd15.Obj);
  (Wrd21.pObj) = (& (Rhp [-2]));
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd21.pObj)));
  (Wrd27.Obj) = (Rsp [4]);
  (* (Rhp++)) = (Wrd27.Obj);
  (* (Rhp++)) = (Wrd19.Obj);
  (Wrd25.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd25.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_37)
  (Wrd5.Obj) = ((SCHEME_OBJECT) 0);
  Rsp = (& (Rsp [1]));
  goto label_36;

DEFLABEL (label_39)
  (Wrd20.Obj) = (Rsp [1]);
  (Wrd21.Obj) = (Rsp [2]);
  (Wrd24.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_16]))));
  (* (--Rsp)) = (Wrd24.Obj);
  (* (--Rsp)) = (Wrd21.Obj);
  (* (--Rsp)) = (Wrd20.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_28)
  (* (--Rsp)) = Rvl;
  goto label_38;

DEFLABEL (label_41)
  (Wrd5.Obj) = (Rsp [2]);
  (Wrd6.Obj) = (Rsp [3]);
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_22_15]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_27)
  (* (--Rsp)) = Rvl;
  goto label_40;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_23_4 3
#define ENVIRONMENT_LABEL_23_3 9
#define DEBUGGING_LABEL_23_2 8
#define OBJECT_23_0 7
#define EXECUTE_CACHE_23_5 5
#define FREE_REFERENCES_LABEL_23_0 4
#define NUMBER_OF_LINKER_SECTIONS_23_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_23 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_23_4);
      goto segment_check_xs_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment_check_xs_3)
DEFLABEL (segment_check_xs_0)
  INTERRUPT_CHECK (26, LABEL_23_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_23_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_24_4 3
#define ENVIRONMENT_LABEL_24_3 9
#define DEBUGGING_LABEL_24_2 8
#define OBJECT_24_0 7
#define EXECUTE_CACHE_24_5 5
#define FREE_REFERENCES_LABEL_24_0 4
#define NUMBER_OF_LINKER_SECTIONS_24_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_24 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_24_4);
      goto segment_check_xe_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment_check_xe_3)
DEFLABEL (segment_check_xe_0)
  INTERRUPT_CHECK (26, LABEL_24_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_24_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_24_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_25_4 3
#define ENVIRONMENT_LABEL_25_3 9
#define DEBUGGING_LABEL_25_2 8
#define OBJECT_25_0 7
#define EXECUTE_CACHE_25_5 5
#define FREE_REFERENCES_LABEL_25_0 4
#define NUMBER_OF_LINKER_SECTIONS_25_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_25 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_25_4);
      goto segment_check_ys_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment_check_ys_3)
DEFLABEL (segment_check_ys_0)
  INTERRUPT_CHECK (26, LABEL_25_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_25_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_25_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_26_4 3
#define ENVIRONMENT_LABEL_26_3 9
#define DEBUGGING_LABEL_26_2 8
#define OBJECT_26_0 7
#define EXECUTE_CACHE_26_5 5
#define FREE_REFERENCES_LABEL_26_0 4
#define NUMBER_OF_LINKER_SECTIONS_26_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_26 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_26_4);
      goto segment_check_ye_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment_check_ye_3)
DEFLABEL (segment_check_ye_0)
  INTERRUPT_CHECK (26, LABEL_26_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_26_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_26_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_27_4 3
#define ENVIRONMENT_LABEL_27_3 9
#define DEBUGGING_LABEL_27_2 8
#define OBJECT_27_0 7
#define EXECUTE_CACHE_27_5 5
#define FREE_REFERENCES_LABEL_27_0 4
#define NUMBER_OF_LINKER_SECTIONS_27_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_27 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd6;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_27_4);
      goto segment_check_dx_dy_0;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (segment_check_dx_dy_3)
DEFLABEL (segment_check_dx_dy_0)
  INTERRUPT_CHECK (26, LABEL_27_4);
  (Wrd5.Obj) = (Rsp [0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (current_block [OBJECT_27_0]);
  (Rsp [1]) = (Wrd6.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_27_5]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_28_4 3
#define LABEL_28_5 5
#define LABEL_28_7 7
#define LABEL_28_12 9
#define LABEL_28_8 11
#define TAG_28_9 4
#define LABEL_28_11 13
#define LABEL_28_15 15
#define LABEL_28_14 17
#define LABEL_28_17 19
#define LABEL_28_16 21
#define ENVIRONMENT_LABEL_28_3 36
#define DEBUGGING_LABEL_28_2 35
#define OBJECT_28_1 34
#define OBJECT_28_0 33
#define EXECUTE_CACHE_28_13 23
#define EXECUTE_CACHE_28_10 25
#define EXECUTE_CACHE_28_6 27
#define FREE_REFERENCE_28_2 30
#define FREE_REFERENCE_28_1 31
#define FREE_REFERENCE_28_0 32
#define FREE_REFERENCES_LABEL_28_0 22
#define NUMBER_OF_LINKER_SECTIONS_28_1 2

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_28 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd12;
  machine_word Wrd17;
  machine_word Wrd16;
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd15;
  machine_word Wrd14;
  machine_word Wrd11;
  machine_word Wrd9;
  machine_word Wrd10;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_28_4);
      goto row_intersects_segments_12;

    case 1:
      current_block = (Rpc - LABEL_28_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_28_7);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_28_12);
      goto label_14;

    case 4:
      current_block = (Rpc - LABEL_28_8);
      goto lambda_19;

    case 5:
      current_block = (Rpc - LABEL_28_11);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_28_15);
      goto label_15;

    case 7:
      current_block = (Rpc - LABEL_28_14);
      goto continuation_5;

    case 8:
      current_block = (Rpc - LABEL_28_17);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_28_16);
      goto continuation_6;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (row_intersects_segments_18)
DEFLABEL (row_intersects_segments_12)
  INTERRUPT_CHECK (26, LABEL_28_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_28_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  (* (Rhp++)) = (MAKE_OBJECT (TC_MANIFEST_CLOSURE, 4));
  (Wrd10.pObj) = (Rhp + 1);
  Rhp += 1;
  WRITE_LABEL_DESCRIPTOR (Rhp, 0x202, 2);
  (* (Rhp++)) = (dispatch_base + TAG_28_9);
  (* (Rhp++)) = ((SCHEME_OBJECT) (& (current_block [LABEL_28_8])));
  Rhp += 1;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (Wrd10.pObj)));
  ((Wrd10.pObj) [2]) = Rvl;
  (* (--Rsp)) = (Wrd9.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_28_7);
  (Rsp [2]) = Rvl;
  Rsp = (& (Rsp [2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_11]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd11.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_0]));
  (Wrd14.Obj) = ((Wrd11.pObj) [0]);
  (Wrd15.uLng) = (OBJECT_TYPE (Wrd14.Obj));
  if ((Wrd15.uLng) == 50)
    goto label_26;
  Wrd10 = Wrd14;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 2);

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_28_11);
  (Rsp [0]) = Rvl;
  (Wrd7.Obj) = (current_block [OBJECT_28_1]);
  if (! (Rvl == (Wrd7.Obj)))
    goto label_20;
  Rvl = (Wrd7.Obj);
  Rsp = (& (Rsp [1]));
  goto pop_return;

DEFLABEL (label_20)
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_14]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (* (--Rsp)) = Rvl;
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_1]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_24;
  Wrd12 = Wrd16;

DEFLABEL (label_23)
  (* (--Rsp)) = (Wrd12.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 2);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_28_14);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_28_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_28_2]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_22;
  Wrd9 = Wrd13;

DEFLABEL (label_21)
  (* (--Rsp)) = (Wrd9.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_28_0]), 2);

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_28_16);
  (Rsp [1]) = Rvl;
  (Wrd10.Obj) = (current_block [OBJECT_28_1]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  (Wrd6.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  (Wrd15.Obj) = (Rsp [0]);
  (* (Rhp++)) = (Wrd15.Obj);
  (* (Rhp++)) = (Wrd6.Obj);
  (Wrd13.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd13.pObj)));
  Rsp = (& (Rsp [2]));
  goto pop_return;

DEFLABEL (label_22)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_17])), (Wrd10.pObj));

DEFLABEL (label_16)
  (Wrd9.Obj) = Rvl;
  goto label_21;

DEFLABEL (label_24)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_15])), (Wrd13.pObj));

DEFLABEL (label_15)
  (Wrd12.Obj) = Rvl;
  goto label_23;

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_28_12])), (Wrd11.pObj));

DEFLABEL (label_14)
  (Wrd10.Obj) = Rvl;
  goto label_25;

DEFLABEL (lambda_19)
  CLOSURE_HEADER (LABEL_28_8);

DEFLABEL (lambda_1)
  CLOSURE_INTERRUPT_CHECK (24);
  (Wrd6.Obj) = (Rsp [0]);
  (Wrd7.pObj) = (OBJECT_ADDRESS (Wrd6.Obj));
  (Wrd5.Obj) = ((Wrd7.pObj) [2]);
  (Rsp [0]) = (Wrd5.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_28_13]));

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_29_4 3
#define LABEL_29_5 5
#define LABEL_29_7 7
#define LABEL_29_9 9
#define LABEL_29_11 11
#define LABEL_29_13 13
#define LABEL_29_17 15
#define LABEL_29_20 17
#define LABEL_29_21 19
#define LABEL_29_22 21
#define LABEL_29_15 23
#define LABEL_29_19 25
#define LABEL_29_23 27
#define LABEL_29_24 29
#define LABEL_29_25 31
#define LABEL_29_26 33
#define ENVIRONMENT_LABEL_29_3 51
#define DEBUGGING_LABEL_29_2 50
#define OBJECT_29_0 49
#define EXECUTE_CACHE_29_18 35
#define EXECUTE_CACHE_29_16 37
#define EXECUTE_CACHE_29_14 39
#define EXECUTE_CACHE_29_12 41
#define EXECUTE_CACHE_29_10 43
#define EXECUTE_CACHE_29_8 45
#define EXECUTE_CACHE_29_6 47
#define FREE_REFERENCES_LABEL_29_0 34
#define NUMBER_OF_LINKER_SECTIONS_29_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_29 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd13;
  machine_word Wrd5;
  machine_word Wrd6;
  machine_word Wrd42;
  machine_word Wrd38;
  machine_word Wrd50;
  machine_word Wrd46;
  machine_word Wrd49;
  machine_word Wrd48;
  machine_word Wrd45;
  machine_word Wrd44;
  machine_word Wrd43;
  machine_word Wrd29;
  machine_word Wrd26;
  machine_word Wrd30;
  machine_word Wrd34;
  machine_word Wrd37;
  machine_word Wrd35;
  machine_word Wrd33;
  machine_word Wrd32;
  machine_word Wrd31;
  machine_word Wrd14;
  machine_word Wrd20;
  machine_word Wrd24;
  machine_word Wrd22;
  machine_word Wrd19;
  machine_word Wrd18;
  machine_word Wrd17;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd9;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd8;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_29_4);
      goto row_intersects_segment_21;

    case 1:
      current_block = (Rpc - LABEL_29_5);
      goto continuation_0;

    case 2:
      current_block = (Rpc - LABEL_29_7);
      goto continuation_1;

    case 3:
      current_block = (Rpc - LABEL_29_9);
      goto continuation_2;

    case 4:
      current_block = (Rpc - LABEL_29_11);
      goto continuation_3;

    case 5:
      current_block = (Rpc - LABEL_29_13);
      goto continuation_4;

    case 6:
      current_block = (Rpc - LABEL_29_17);
      goto continuation_5;

    case 7:
      current_block = (Rpc - LABEL_29_20);
      goto label_23;

    case 8:
      current_block = (Rpc - LABEL_29_21);
      goto label_24;

    case 9:
      current_block = (Rpc - LABEL_29_22);
      goto label_25;

    case 10:
      current_block = (Rpc - LABEL_29_15);
      goto continuation_11;

    case 11:
      current_block = (Rpc - LABEL_29_19);
      goto continuation_9;

    case 12:
      current_block = (Rpc - LABEL_29_23);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_29_24);
      goto label_26;

    case 14:
      current_block = (Rpc - LABEL_29_25);
      goto continuation_14;

    case 15:
      current_block = (Rpc - LABEL_29_26);
      goto continuation_13;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (row_intersects_segment_28)
DEFLABEL (row_intersects_segment_21)
  INTERRUPT_CHECK (26, LABEL_29_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_6]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_29_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_7]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_8]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_29_7);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_9]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_29_9);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [5]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_12]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_29_11);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_29_13);
  (* (--Rsp)) = Rvl;
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_36;
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_17]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd12.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_18]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_29_17);
  if (! (Rvl == ((SCHEME_OBJECT) 0)))
    goto label_29;
  Rvl = (current_block [OBJECT_29_0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_29)
  (Wrd9.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_19]))));
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd16.Obj) = (Rsp [6]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if (! ((Wrd17.uLng) == 26))
    goto label_35;
  (Wrd18.Obj) = (Rsp [4]);
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd18.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_35;
  (Wrd22.Lng) = (FIXNUM_TO_LONG (Wrd16.Obj));
  (Wrd24.Lng) = (FIXNUM_TO_LONG (Wrd18.Obj));
  (Wrd20.Lng) = ((Wrd22.Lng) - (Wrd24.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_35;
  (Wrd15.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));

DEFLABEL (label_34)
  (Wrd31.uLng) = (OBJECT_TYPE (Wrd15.Obj));
  if (! ((Wrd31.uLng) == 26))
    goto label_33;
  (Wrd32.Obj) = (Rsp [1]);
  (Wrd33.uLng) = (OBJECT_TYPE (Wrd32.Obj));
  if (! ((Wrd33.uLng) == 26))
    goto label_33;
  (Wrd35.Lng) = (FIXNUM_TO_LONG (Wrd15.Obj));
  (Wrd37.Lng) = (FIXNUM_TO_LONG (Wrd32.Obj));
  if (multiply_with_overflow ((Wrd35.Lng), (Wrd37.Lng), (& (Wrd34.Lng))))
    goto label_33;
  (Wrd30.Obj) = (LONG_TO_FIXNUM (Wrd34.Lng));

DEFLABEL (label_32)
  (Wrd43.Obj) = (Rsp [5]);
  (Wrd44.uLng) = (OBJECT_TYPE (Wrd43.Obj));
  if (! ((Wrd44.uLng) == 26))
    goto label_31;
  (Wrd45.uLng) = (OBJECT_TYPE (Wrd30.Obj));
  if (! ((Wrd45.uLng) == 26))
    goto label_31;
  (Wrd48.Lng) = (FIXNUM_TO_LONG (Wrd43.Obj));
  (Wrd49.Lng) = (FIXNUM_TO_LONG (Wrd30.Obj));
  (Wrd46.Lng) = ((Wrd48.Lng) + (Wrd49.Lng));
  if (! (LONG_TO_FIXNUM_P (Wrd46.Lng)))
    goto label_31;
  (Wrd50.Obj) = (LONG_TO_FIXNUM (Wrd46.Lng));
  (* (--Rsp)) = (Wrd50.Obj);

DEFLABEL (label_30)
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_9)
  INTERRUPT_CHECK (27, LABEL_29_19);
  (Wrd10.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd10.Obj);
  (Wrd8.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd8.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_31)
  (Wrd38.Obj) = (Rsp [5]);
  (Wrd42.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_22]))));
  (* (--Rsp)) = (Wrd42.Obj);
  (* (--Rsp)) = (Wrd30.Obj);
  (* (--Rsp)) = (Wrd38.Obj);
  INVOKE_INTERFACE_0 (43);

DEFLABEL (label_25)
  (* (--Rsp)) = Rvl;
  goto label_30;

DEFLABEL (label_33)
  (Wrd26.Obj) = (Rsp [1]);
  (Wrd29.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_21]))));
  (* (--Rsp)) = (Wrd29.Obj);
  (* (--Rsp)) = (Wrd26.Obj);
  (* (--Rsp)) = (Wrd15.Obj);
  INVOKE_INTERFACE_0 (41);

DEFLABEL (label_24)
  (Wrd30.Obj) = Rvl;
  goto label_32;

DEFLABEL (label_35)
  (Wrd10.Obj) = (Rsp [6]);
  (Wrd11.Obj) = (Rsp [4]);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_20]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (* (--Rsp)) = (Wrd11.Obj);
  (* (--Rsp)) = (Wrd10.Obj);
  INVOKE_INTERFACE_0 (40);

DEFLABEL (label_23)
  (Wrd15.Obj) = Rvl;
  goto label_34;

DEFLABEL (label_36)
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_15]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_29_15);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_23]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (Rsp [7]);
  (* (--Rsp)) = (Wrd8.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_29_23);
  (Wrd6.Obj) = Rvl;
  (Wrd5.Obj) = (* (Rsp++));
  (Wrd7.uLng) = (OBJECT_TYPE (Rvl));
  if (! ((Wrd7.uLng) == 26))
    goto label_39;
  (Wrd8.uLng) = (OBJECT_TYPE (Wrd5.Obj));
  if (! ((Wrd8.uLng) == 26))
    goto label_39;
  if (Rvl == (Wrd5.Obj))
    goto label_38;

DEFLABEL (label_37)
  Rvl = (current_block [OBJECT_29_0]);
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_38)
  (Wrd19.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_25]))));
  (* (--Rsp)) = (Wrd19.Obj);
  (Wrd20.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd20.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_14)
  INTERRUPT_CHECK (27, LABEL_29_25);
  (Wrd9.Obj) = (current_block [OBJECT_29_0]);
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd9.Obj);
  (Wrd7.pObj) = (& (Rhp [-2]));
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (1, (Wrd7.pObj)));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd12.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_26]))));
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd13.Obj) = (Rsp [6]);
  (* (--Rsp)) = (Wrd13.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_29_16]));

DEFLABEL (continuation_13)
  INTERRUPT_CHECK (27, LABEL_29_26);
  (Wrd5.Obj) = (* (Rsp++));
  (* (Rhp++)) = Rvl;
  (* (Rhp++)) = (Wrd5.Obj);
  (Wrd9.pObj) = (& (Rhp [-2]));
  Rvl = (MAKE_POINTER_OBJECT (1, (Wrd9.pObj)));
  Rsp = (& (Rsp [7]));
  goto pop_return;

DEFLABEL (label_39)
  (Wrd13.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_29_24]))));
  (* (--Rsp)) = (Wrd13.Obj);
  (* (--Rsp)) = (Wrd5.Obj);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_INTERFACE_0 (36);

DEFLABEL (label_26)
  if (Rvl == ((SCHEME_OBJECT) 0))
    goto label_37;
  goto label_38;

INVOKE_INTERFACE_TARGET_0
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_30_4 3
#define LABEL_30_5 5
#define LABEL_30_6 7
#define LABEL_30_8 9
#define LABEL_30_9 11
#define LABEL_30_12 13
#define LABEL_30_13 15
#define ENVIRONMENT_LABEL_30_3 28
#define DEBUGGING_LABEL_30_2 27
#define EXECUTE_CACHE_30_15 17
#define EXECUTE_CACHE_30_14 19
#define EXECUTE_CACHE_30_11 21
#define EXECUTE_CACHE_30_10 23
#define EXECUTE_CACHE_30_7 25
#define FREE_REFERENCES_LABEL_30_0 16
#define NUMBER_OF_LINKER_SECTIONS_30_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_30 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_30_4);
      goto make_inexact_frame_6;

    case 1:
      current_block = (Rpc - LABEL_30_5);
      goto continuation_3;

    case 2:
      current_block = (Rpc - LABEL_30_6);
      goto continuation_2;

    case 3:
      current_block = (Rpc - LABEL_30_8);
      goto continuation_1;

    case 4:
      current_block = (Rpc - LABEL_30_9);
      goto continuation_0;

    case 5:
      current_block = (Rpc - LABEL_30_12);
      goto continuation_5;

    case 6:
      current_block = (Rpc - LABEL_30_13);
      goto continuation_4;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_inexact_frame_9)
DEFLABEL (make_inexact_frame_6)
  INTERRUPT_CHECK (26, LABEL_30_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_7]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_30_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_30_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_10]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_30_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_30_8);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_12]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_30_13]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [4]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_14]));

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_30_13);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_11]));

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_30_12);
  (Rsp [2]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_30_15]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_31_4 3
#define LABEL_31_5 5
#define LABEL_31_6 7
#define LABEL_31_8 9
#define LABEL_31_9 11
#define ENVIRONMENT_LABEL_31_3 22
#define DEBUGGING_LABEL_31_2 21
#define EXECUTE_CACHE_31_12 13
#define EXECUTE_CACHE_31_11 15
#define EXECUTE_CACHE_31_10 17
#define EXECUTE_CACHE_31_7 19
#define FREE_REFERENCES_LABEL_31_0 12
#define NUMBER_OF_LINKER_SECTIONS_31_1 1

#ifndef WANT_ONLY_DATA

static SCHEME_OBJECT *
prmpnt_so_code_31 (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd11;
  machine_word Wrd10;
  machine_word Wrd7;
  INVOKE_INTERFACE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_31_4);
      goto make_inexact_vect_4;

    case 1:
      current_block = (Rpc - LABEL_31_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_31_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_31_8);
      goto continuation_3;

    case 4:
      current_block = (Rpc - LABEL_31_9);
      goto continuation_2;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (make_inexact_vect_7)
DEFLABEL (make_inexact_vect_4)
  INTERRUPT_CHECK (26, LABEL_31_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_5]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_6]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [2]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_31_6);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_31_5);
  (* (--Rsp)) = Rvl;
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_31_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd11.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_10]));

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_31_9);
  (* (--Rsp)) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_11]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_31_8);
  (Rsp [1]) = Rvl;
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_31_12]));

INVOKE_INTERFACE_TARGET_1
}

#endif /* !WANT_ONLY_DATA */

#define LABEL_4 3
#define LABEL_5 5
#define LABEL_6 7
#define LABEL_8 9
#define LABEL_9 11
#define LABEL_10 13
#define LABEL_11 15
#define LABEL_14 17
#define LABEL_15 19
#define LABEL_13 21
#define LABEL_17 23
#define LABEL_18 25
#define LABEL_16 27
#define LABEL_21 29
#define LABEL_22 31
#define LABEL_19 33
#define LABEL_20 35
#define LABEL_24 37
#define LABEL_25 39
#define LABEL_26 41
#define ENVIRONMENT_LABEL_3 69
#define DEBUGGING_LABEL_2 68
#define PURIFICATION_ROOT 67
#define OBJECT_13 66
#define OBJECT_12 65
#define OBJECT_11 64
#define OBJECT_10 63
#define OBJECT_9 62
#define OBJECT_8 61
#define OBJECT_7 60
#define OBJECT_6 59
#define OBJECT_5 58
#define OBJECT_4 57
#define OBJECT_3 56
#define OBJECT_2 55
#define OBJECT_1 54
#define OBJECT_0 53
#define EXECUTE_CACHE_23 43
#define EXECUTE_CACHE_7 45
#define FREE_REFERENCE_1 48
#define FREE_REFERENCE_0 49
#define GLOBAL_EXECUTE_CACHE_12 51
#define FREE_REFERENCES_LABEL_0 42
#define NUMBER_OF_LINKER_SECTIONS_1 3

#ifndef WANT_ONLY_DATA

SCHEME_OBJECT *
prmpnt_so_fc7bf435de40338a (SCHEME_OBJECT * Rpc, entry_count_t dispatch_base)
{
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES ();
  SCHEME_OBJECT * Rdl ATTRIBUTE((unused));
  machine_word Wrd17;
  machine_word Wrd24;
  machine_word Wrd23;
  machine_word Wrd18;
  machine_word Wrd22;
  machine_word Wrd20;
  machine_word Wrd21;
  machine_word Wrd19;
  machine_word Wrd13;
  machine_word Wrd9;
  machine_word Wrd6;
  machine_word Wrd14;
  machine_word Wrd10;
  machine_word Wrd7;
  machine_word Wrd16;
  machine_word Wrd15;
  machine_word Wrd12;
  machine_word Wrd11;
  machine_word Wrd8;
  machine_word Wrd5;
  INVOKE_INTERFACE_DECLS
  INVOKE_PRIMITIVE_DECLS

  Rdl = (OBJECT_ADDRESS (Rvl));
  goto perform_dispatch;

DEFLABEL (pop_return)
  Rpc = (OBJECT_ADDRESS (* (Rsp++)));

DEFLABEL (perform_dispatch)
  switch ((* ((unsigned long *) Rpc)) - dispatch_base)
    {
    case 0:
      current_block = (Rpc - LABEL_4);
      goto continuation_2;

    case 1:
      current_block = (Rpc - LABEL_5);
      goto continuation_1;

    case 2:
      current_block = (Rpc - LABEL_6);
      goto continuation_0;

    case 3:
      current_block = (Rpc - LABEL_8);
      goto continuation_5;

    case 4:
      current_block = (Rpc - LABEL_9);
      goto continuation_4;

    case 5:
      current_block = (Rpc - LABEL_10);
      goto continuation_3;

    case 6:
      current_block = (Rpc - LABEL_11);
      goto continuation_6;

    case 7:
      current_block = (Rpc - LABEL_14);
      goto label_15;

    case 8:
      current_block = (Rpc - LABEL_15);
      goto label_16;

    case 9:
      current_block = (Rpc - LABEL_13);
      goto continuation_8;

    case 10:
      current_block = (Rpc - LABEL_17);
      goto label_17;

    case 11:
      current_block = (Rpc - LABEL_18);
      goto label_18;

    case 12:
      current_block = (Rpc - LABEL_16);
      goto continuation_10;

    case 13:
      current_block = (Rpc - LABEL_21);
      goto label_19;

    case 14:
      current_block = (Rpc - LABEL_22);
      goto label_20;

    case 15:
      current_block = (Rpc - LABEL_19);
      goto continuation_12;

    case 16:
      current_block = (Rpc - LABEL_20);
      goto continuation_11;

    case 17:
      current_block = (Rpc - LABEL_24);
      goto label_23;

    case 18:
      current_block = (Rpc - LABEL_25);
      goto label_24;

    case 19:
      current_block = (Rpc - LABEL_26);
      goto expression_14;

    default:
      UNCACHE_VARIABLES ();
      return (Rpc);
    }

DEFLABEL (expression_14)
  (current_block [ENVIRONMENT_LABEL_3]) = (Rrb [REGBLOCK_ENV]);
  INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_25])), current_block, (& (current_block [FREE_REFERENCES_LABEL_0])), NUMBER_OF_LINKER_SECTIONS_1);

DEFLABEL (label_24)
  (* (--Rsp)) = (ULONG_TO_FIXNUM (1UL));

DEFLABEL (label_23)
  {
    static const short sections [] =
      {
	0,
	1,
	1,
	1,
	2,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	1,
	0,
	2,
	0,
	2,
	2,
	1,
	2,
	2,
	2,
	1,
	1,
	2,
	3,
	2
      };
    unsigned long counter = (OBJECT_DATUM (* Rsp));
    SCHEME_OBJECT blocks;
    SCHEME_OBJECT * sub_block;
    short section;
    if (counter > 31)
      goto label_22;
    blocks = (current_block [OBJECT_13]);
    sub_block = (OBJECT_ADDRESS (MEMORY_REF (blocks, counter)));
    (sub_block [(OBJECT_DATUM (sub_block [0]))]) = (Rrb [REGBLOCK_ENV]);
    section = (sections [counter]);
    (* Rsp) = (ULONG_TO_FIXNUM (counter + 1));
    INVOKE_INTERFACE_4 (23, (& (current_block [LABEL_24])), sub_block, (sub_block + (2 + (OBJECT_DATUM (sub_block [1])))), section);
  }

DEFLABEL (label_22)
  Rsp += 1;
  (Wrd5.Obj) = (Rrb [3]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd8.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_4]))));
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd11.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_5]))));
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd12.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd15.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_6]))));
  (* (--Rsp)) = (Wrd15.Obj);
  (Wrd16.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd16.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_0)
  INTERRUPT_CHECK (27, LABEL_6);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 2);

DEFLABEL (continuation_1)
  INTERRUPT_CHECK (27, LABEL_5);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_0]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_2)
  INTERRUPT_CHECK (27, LABEL_4);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_8]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_9]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd14.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_10]))));
  (* (--Rsp)) = (Wrd14.Obj);
  (Wrd15.Obj) = (current_block [OBJECT_1]);
  (* (--Rsp)) = (Wrd15.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_7]));

DEFLABEL (continuation_3)
  INTERRUPT_CHECK (27, LABEL_10);
  (* (--Rsp)) = Rvl;
  INVOKE_PRIMITIVE ((current_block [OBJECT_4]), 2);

DEFLABEL (continuation_4)
  INTERRUPT_CHECK (27, LABEL_9);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_2]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_5)
  INTERRUPT_CHECK (27, LABEL_8);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_11]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd8.Obj) = (current_block [OBJECT_5]);
  (* (--Rsp)) = (Wrd8.Obj);
  (Wrd9.Obj) = (current_block [OBJECT_6]);
  (* (--Rsp)) = (Wrd9.Obj);
  (Wrd10.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd10.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (continuation_6)
  INTERRUPT_CHECK (27, LABEL_11);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_13]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_36;
  Wrd9 = Wrd13;

DEFLABEL (label_35)
  Wrd8 = Wrd9;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_34;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_34;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_33)
  (Wrd23.Obj) = (current_block [OBJECT_7]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_8)
  INTERRUPT_CHECK (27, LABEL_13);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_16]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd13.Obj) = ((Wrd10.pObj) [0]);
  (Wrd14.uLng) = (OBJECT_TYPE (Wrd13.Obj));
  if ((Wrd14.uLng) == 50)
    goto label_32;
  Wrd9 = Wrd13;

DEFLABEL (label_31)
  Wrd8 = Wrd9;
  (Wrd19.uLng) = (OBJECT_TYPE (Wrd9.Obj));
  if (! ((Wrd19.uLng) == 26))
    goto label_30;
  (Wrd21.Lng) = (FIXNUM_TO_LONG (Wrd9.Obj));
  (Wrd20.Lng) = ((Wrd21.Lng) - 1L);
  if (! (LONG_TO_FIXNUM_P (Wrd20.Lng)))
    goto label_30;
  (Wrd22.Obj) = (LONG_TO_FIXNUM (Wrd20.Lng));
  (* (--Rsp)) = (Wrd22.Obj);

DEFLABEL (label_29)
  (Wrd23.Obj) = (current_block [OBJECT_8]);
  (* (--Rsp)) = (Wrd23.Obj);
  (Wrd24.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd24.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_10)
  INTERRUPT_CHECK (27, LABEL_16);
  (Wrd7.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_19]))));
  (* (--Rsp)) = (Wrd7.Obj);
  (Wrd10.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_20]))));
  (* (--Rsp)) = (Wrd10.Obj);
  (Wrd11.Obj) = (current_block [OBJECT_9]);
  (* (--Rsp)) = (Wrd11.Obj);
  (Wrd13.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_0]));
  (Wrd16.Obj) = ((Wrd13.pObj) [0]);
  (Wrd17.uLng) = (OBJECT_TYPE (Wrd16.Obj));
  if ((Wrd17.uLng) == 50)
    goto label_28;
  Wrd12 = Wrd16;

DEFLABEL (label_27)
  (* (--Rsp)) = (Wrd12.Obj);
  (Wrd19.pObj) = ((SCHEME_OBJECT *) (current_block [FREE_REFERENCE_1]));
  (Wrd22.Obj) = ((Wrd19.pObj) [0]);
  (Wrd23.uLng) = (OBJECT_TYPE (Wrd22.Obj));
  if ((Wrd23.uLng) == 50)
    goto label_26;
  Wrd18 = Wrd22;

DEFLABEL (label_25)
  (* (--Rsp)) = (Wrd18.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [EXECUTE_CACHE_23]));

DEFLABEL (continuation_11)
  INTERRUPT_CHECK (27, LABEL_20);
  (* (--Rsp)) = Rvl;
  (Wrd5.Obj) = (current_block [OBJECT_12]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [3]);
  (* (--Rsp)) = (Wrd6.Obj);
  INVOKE_PRIMITIVE ((current_block [OBJECT_3]), 3);

DEFLABEL (continuation_12)
  INTERRUPT_CHECK (27, LABEL_19);
  (Wrd5.Obj) = (current_block [OBJECT_10]);
  (* (--Rsp)) = (Wrd5.Obj);
  (Wrd6.Obj) = (Rsp [1]);
  (* (--Rsp)) = (Wrd6.Obj);
  (Wrd7.Obj) = (current_block [OBJECT_11]);
  (Rsp [2]) = (Wrd7.Obj);
  JUMP ((SCHEME_OBJECT *) (current_block [GLOBAL_EXECUTE_CACHE_12]));

DEFLABEL (label_26)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_22])), (Wrd19.pObj));

DEFLABEL (label_20)
  (Wrd18.Obj) = Rvl;
  goto label_25;

DEFLABEL (label_28)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_21])), (Wrd13.pObj));

DEFLABEL (label_19)
  (Wrd12.Obj) = Rvl;
  goto label_27;

DEFLABEL (label_30)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_18]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_18)
  (* (--Rsp)) = Rvl;
  goto label_29;

DEFLABEL (label_32)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_17])), (Wrd10.pObj));

DEFLABEL (label_17)
  (Wrd9.Obj) = Rvl;
  goto label_31;

DEFLABEL (label_34)
  (Wrd18.Obj) = (MAKE_POINTER_OBJECT (40, (& (current_block [LABEL_15]))));
  (* (--Rsp)) = (Wrd18.Obj);
  (* (--Rsp)) = (Wrd8.Obj);
  INVOKE_INTERFACE_0 (34);

DEFLABEL (label_16)
  (* (--Rsp)) = Rvl;
  goto label_33;

DEFLABEL (label_36)
  INVOKE_INTERFACE_2 (31, (& (current_block [LABEL_14])), (Wrd10.pObj));

DEFLABEL (label_15)
  (Wrd9.Obj) = Rvl;
  goto label_35;

INVOKE_INTERFACE_TARGET_0
INVOKE_PRIMITIVE_TARGET
}

static const struct liarc_code_S arr_decl_prmpnt_so_fc7bf435de40338a [31] =
  {
    { "prmpnt_so_code_1", 6, prmpnt_so_code_1 },
    { "prmpnt_so_code_2", 14, prmpnt_so_code_2 },
    { "prmpnt_so_code_3", 33, prmpnt_so_code_3 },
    { "prmpnt_so_code_4", 4, prmpnt_so_code_4 },
    { "prmpnt_so_code_5", 16, prmpnt_so_code_5 },
    { "prmpnt_so_code_6", 36, prmpnt_so_code_6 },
    { "prmpnt_so_code_7", 4, prmpnt_so_code_7 },
    { "prmpnt_so_code_8", 33, prmpnt_so_code_8 },
    { "prmpnt_so_code_9", 14, prmpnt_so_code_9 },
    { "prmpnt_so_code_10", 43, prmpnt_so_code_10 },
    { "prmpnt_so_code_11", 57, prmpnt_so_code_11 },
    { "prmpnt_so_code_12", 1, prmpnt_so_code_12 },
    { "prmpnt_so_code_13", 59, prmpnt_so_code_13 },
    { "prmpnt_so_code_14", 2, prmpnt_so_code_14 },
    { "prmpnt_so_code_15", 1, prmpnt_so_code_15 },
    { "prmpnt_so_code_16", 1, prmpnt_so_code_16 },
    { "prmpnt_so_code_17", 1, prmpnt_so_code_17 },
    { "prmpnt_so_code_18", 1, prmpnt_so_code_18 },
    { "prmpnt_so_code_19", 1, prmpnt_so_code_19 },
    { "prmpnt_so_code_20", 1, prmpnt_so_code_20 },
    { "prmpnt_so_code_21", 9, prmpnt_so_code_21 },
    { "prmpnt_so_code_22", 14, prmpnt_so_code_22 },
    { "prmpnt_so_code_23", 1, prmpnt_so_code_23 },
    { "prmpnt_so_code_24", 1, prmpnt_so_code_24 },
    { "prmpnt_so_code_25", 1, prmpnt_so_code_25 },
    { "prmpnt_so_code_26", 1, prmpnt_so_code_26 },
    { "prmpnt_so_code_27", 1, prmpnt_so_code_27 },
    { "prmpnt_so_code_28", 10, prmpnt_so_code_28 },
    { "prmpnt_so_code_29", 16, prmpnt_so_code_29 },
    { "prmpnt_so_code_30", 7, prmpnt_so_code_30 },
    { "prmpnt_so_code_31", 5, prmpnt_so_code_31 }
  };

int
decl_prmpnt_so_fc7bf435de40338a (void)
{
  DECLARE_SUBCODE_MULTIPLE (arr_decl_prmpnt_so_fc7bf435de40338a);
  return (0);
}

DECLARE_COMPILED_CODE ("prmpnt.so", 20, decl_prmpnt_so_fc7bf435de40338a, prmpnt_so_fc7bf435de40338a)

#endif /* !WANT_ONLY_DATA */

#ifndef WANT_ONLY_CODE

static const unsigned char prog_prmpnt_so_data_fc7bf435de40338a [6055] =
  "\xb3\x01\x4b\xab\x0d\x1d\x0c\xb8\x0d\x1d\xb0\x81\x88\x80\x0d\xb9"
  "\x0d\xba\x24\x28\x0d\xbb\x28\x0d\xbc\x23\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\xbd\x1d\xb0\x82\x88\x0d\x09"
  "\xb2\xb1\x0d\xbe\x0d\xbf\x0d\x1c\x25\xb1\xb2\x24\x28\x0d\x28\x0d"
  "\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17"
  "\x2b\x1c\x1d\xb0\x83\x88\xc2\x1c\x80\xc1\x1c\xc1\x1c\x08\x0d\x1c"
  "\xc2\x1c\x0d\x1c\x0d\x1c\x0d\x1c\x08\x89\x0d\x1c\xb1\xb2\x1b\xb7"
  "\x24\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x84\x88"
  "\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x85\x88\x28\x0d\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x0d\x1c\x28\x0d\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x86\x88\x1b\x82\x81\x87\x1b"
  "\x1b\x1b\x1b\x08\x89\x1b\x80\x1b\x24\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1d\xb7\xb6\x24"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x1b\x80\x1b\x1b\x08\x1b\x09\x1b\x1b\x1b\x1b\x08\x89"
  "\x1b\x0c\x1b\xb7\x24\x28\x0d\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x0d\x1c\x28\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d"
  "\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\xc2\x1c\x1b\x28\x1b\x28\x1b\x28\xb3\x28\x1b"
  "\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x80\x1b\x1b\x08\x1b\x1b\x1b\x1b"
  "\x0c\x1b\x1b\x08\x89\x0d\x1b\xb7\x24\x28\x1b\x28\x1b\x28\x0d\x28"
  "\x0d\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28"
  "\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x1b\x1b\x1b"
  "\x0d\x1c\x0d\x1c\x24\x28\x1b\x28\x1b\x28\xb3\x28\x1b\x28\x0d\x1c"
  "\x28\x1b\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x07\x22\x29\x21\x9d\x2b\x1c\x1d\xb0\x02\x88\x0d\xc2\x1c"
  "\x80\x08\x0d\x1c\x09\x1b\x1b\x1b\xb6\x24\x28\x1b\x28\x1b\x28\x1b"
  "\x28\x1b\x28\x1b\x28\x1b\x28\x0d\x28\x1b\x28\xb3\x28\x0d\x1c\x28"
  "\x0d\x1c\x28\x1b\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x07\x1b\x1b\x22\x29\x22\x29"
  "\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x0d\x1c\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x83\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d"
  "\xb0\x02\x88\x84\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02"
  "\x88\x85\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x86"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08\x83\x82"
  "\x81\x80\x28\x1b\x28\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0"
  "\x02\x88\x08\x09\x28\x1b\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x80"
  "\x28\x1b\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x81\x28\x1b"
  "\x23\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x82\x28\x1b\x23\x22"
  "\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x83\x28\x1b\x23\x22\x29\x21"
  "\x17\x2b\x1c\x1d\xb0\x02\x88\x84\x28\x1b\x23\x22\x29\x21\x17\x2b"
  "\x1c\x1d\xb0\x02\x88\x08\x1b\x0d\x1b\x1b\x24\x28\x1b\x28\x1b\x28"
  "\x0d\x1c\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x08"
  "\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28\x0d\x1c\x28"
  "\x1b\x28\x0d\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b\x28\x1b"
  "\x28\x0d\x1c\x28\x1b\x28\xb4\x23\x22\x29\x22\x29\x22\x29\x22\x29"
  "\x22\x29\x22\x29\x22\x29\x21\x17\x2b\x1c\x1d\xb0\x02\x88\x28\x1b"
  "\x28\x1b\x28\x1b\x28\xb3\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x21\x17\x2b\x1c\x17\x1c\x88\x1b\x1b\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a\x1b\x2a"
  "\x1b\x2a\x1b\x2a\x1b\x2a\xb5\x2a\x17\x1b\x1b\x1b\x1b\x1b\x1b\x1b"
  "\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x1b\x0d\x1b"
  "\x0d\x1b\x1b\x0d\x1b\x0d\x0d\x0d\x17\x09\xb7\xb6\xb1\xb2\x99\x02"
  "\x02\x99\x1b\xc3\x1b\x1b\x1b\x08\x89\x1b\x28\x0d\x26\xb1\xb2\x24"
  "\x28\x1b\x28\x1b\x23\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22"
  "\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x22\x29\x21\x17\x02"
  "\x3d\x2f\x55\x73\x65\x72\x73\x2f\x72\x6d\x69\x72\x65\x6c\x61\x6e"
  "\x2f\x44\x6f\x63\x75\x6d\x65\x6e\x74\x73\x2f\x63\x6f\x64\x65\x2f"
  "\x73\x69\x63\x70\x2d\x65\x78\x65\x72\x63\x69\x73\x65\x73\x2f\x63"
  "\x68\x32\x2f\x70\x72\x6d\x70\x6e\x74\x2e\x69\x6e\x66\x15\x23\x5b"
  "\x70\x75\x72\x69\x66\x69\x63\x61\x74\x69\x6f\x6e\x2d\x72\x6f\x6f"
  "\x74\x5d\x02\x10\x2a\x73\x63\x72\x65\x65\x6e\x2d\x68\x65\x69\x67"
  "\x68\x74\x2a\x0f\x2a\x73\x63\x72\x65\x65\x6e\x2d\x77\x69\x64\x74"
  "\x68\x2a\x03\x04\x0a\x6d\x61\x6b\x65\x2d\x76\x65\x63\x74\x05\x0b"
  "\x6d\x61\x6b\x65\x2d\x66\x72\x61\x6d\x65\x03\x1a\x0e\x81\x85\x02"
  "\x19\x0c\x81\x83\x02\x18\x0a\x81\x87\x02\x17\x08\x81\x81\x02\x16"
  "\x06\x81\x83\x02\x15\x04\x82\x02\x0d\x19\x02\x04\x73\x65\x74\x05"
  "\x32\x35\x35\x2e\x12\x2a\x6c\x61\x73\x74\x2d\x73\x63\x72\x65\x65"
  "\x6e\x2d\x72\x6f\x77\x2a\x15\x2a\x6c\x61\x73\x74\x2d\x73\x63\x72"
  "\x65\x65\x6e\x2d\x63\x6f\x6c\x75\x6d\x6e\x2a\x0d\x2a\x74\x68\x65"
  "\x2d\x73\x63\x72\x65\x65\x6e\x2a\x09\x06\x03\x03\x0f\x69\x6e\x65"
  "\x78\x61\x63\x74\x2d\x3e\x65\x78\x61\x63\x74\x05\x0d\x6d\x61\x6b"
  "\x65\x2d\x70\x69\x63\x74\x75\x72\x65\x0a\x03\x28\x1e\x81\x83\x02"
  "\x27\x1c\x81\x83\x02\x26\x1a\x81\x89\x02\x25\x18\x81\x87\x02\x24"
  "\x16\x81\x83\x02\x23\x14\x81\x83\x02\x22\x12\x81\x83\x02\x21\x10"
  "\x81\x83\x02\x20\x0e\x81\x83\x02\x1f\x0c\x81\x83\x02\x1e\x0a\x81"
  "\x83\x02\x1d\x08\x81\x83\x02\x1c\x06\x81\x83\x02\x1b\x04\x83\x04"
  "\x1d\x30\x0b\x02\x0b\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0c"
  "\x04\x63\x61\x72\x0d\x04\x63\x64\x72\x0e\x05\x64\x6f\x6e\x65\x0f"
  "\x12\x6c\x65\x78\x69\x63\x61\x6c\x2d\x72\x65\x66\x65\x72\x65\x6e"
  "\x63\x65\x10\x0d\x70\x69\x63\x74\x75\x72\x65\x2d\x64\x61\x74\x61"
  "\x11\x08\x73\x74\x75\x64\x65\x6e\x74\x12\x09\x70\x69\x63\x74\x75"
  "\x72\x65\x73\x13\x19\x69\x6e\x76\x61\x6c\x69\x64\x61\x74\x65\x2d"
  "\x63\x61\x63\x68\x65\x64\x2d\x76\x61\x6c\x75\x65\x73\x14\x09\x05"
  "\x03\x0f\x65\x78\x61\x63\x74\x2d\x3e\x69\x6e\x65\x78\x61\x63\x74"
  "\x15\x03\x0e\x2d\x3e\x65\x6e\x76\x69\x72\x6f\x6e\x6d\x65\x6e\x74"
  "\x16\x03\x13\x6d\x61\x6b\x65\x2d\x69\x6e\x65\x78\x61\x63\x74\x2d"
  "\x66\x72\x61\x6d\x65\x17\x05\x13\x66\x72\x61\x6d\x65\x2d\x6d\x61"
  "\x70\x70\x69\x6e\x67\x2d\x69\x6e\x66\x6f\x18\x03\x0c\x64\x65\x67"
  "\x65\x6e\x65\x72\x61\x74\x65\x3f\x19\x03\x15\x66\x72\x61\x6d\x65"
  "\x2d\x6d\x61\x70\x2d\x6c\x6f\x77\x65\x73\x74\x2d\x72\x6f\x77\x1a"
  "\x03\x13\x66\x72\x61\x6d\x65\x2d\x6d\x61\x70\x2d\x73\x65\x67\x6d"
  "\x65\x6e\x74\x73\x1b\x03\x16\x66\x72\x61\x6d\x65\x2d\x6d\x61\x70"
  "\x2d\x68\x69\x67\x68\x65\x73\x74\x2d\x72\x6f\x77\x1c\x04\x18\x72"
  "\x6f\x77\x2d\x69\x6e\x74\x65\x72\x73\x65\x63\x74\x73\x2d\x73\x65"
  "\x67\x6d\x65\x6e\x74\x73\x1d\x04\x04\x6d\x69\x6e\x1e\x04\x04\x6d"
  "\x61\x78\x1f\x06\x14\x66\x69\x6c\x6c\x2d\x72\x6f\x77\x2d\x77\x69"
  "\x74\x68\x2d\x76\x61\x6c\x75\x65\x20\x0d\x49\x44\x81\x89\x02\x48"
  "\x42\x81\x89\x02\x47\x40\x81\x8b\x02\x46\x3e\x81\x93\x02\x45\x3c"
  "\x81\x95\x02\x44\x3a\x81\x91\x02\x43\x38\x81\x95\x02\x42\x36\x81"
  "\x93\x02\x41\x34\x81\x93\x02\x40\x32\x81\x8f\x02\x3f\x30\x81\x8d"
  "\x02\x3e\x2e\x81\x8f\x02\x3d\x2c\x81\x8d\x02\x3c\x2a\x81\x8d\x02"
  "\x3b\x28\x81\x8b\x02\x3a\x26\x81\x8d\x02\x39\x24\x81\x8b\x02\x38"
  "\x22\x81\x89\x02\x37\x20\x81\x87\x02\x36\x1e\x81\x87\x02\x35\x1c"
  "\x81\x87\x02\x34\x1a\x81\x85\x02\x33\x18\x81\x85\x02\x32\x16\x81"
  "\x8b\x02\x31\x14\x81\x8d\x02\x30\x12\x81\x89\x02\x2f\x10\x81\x8b"
  "\x02\x2e\x0e\x81\x87\x02\x2d\x0c\x81\x85\x02\x2c\x0a\x81\x87\x02"
  "\x2b\x08\x81\x83\x02\x2a\x06\x81\x85\x02\x29\x04\x83\x04\x43\x6e"
  "\x21\x02\x0f\x05\x15\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x65\x74\x21\x22\x02\x4d\x0a\x81\x8b\x02"
  "\x4c\x08\x81\x8b\x02\x4b\x06\x81\x89\x02\x4a\x04\x86\x0a\x09\x10"
  "\x23\x02\x04\x09\x66\x6f\x72\x2d\x65\x61\x63\x68\x03\x0c\x66\x72"
  "\x61\x6d\x65\x2d\x65\x64\x67\x65\x32\x24\x03\x0c\x73\x65\x67\x6d"
  "\x65\x6e\x74\x2d\x65\x6e\x64\x03\x0d\x66\x72\x61\x6d\x65\x2d\x6f"
  "\x72\x69\x67\x69\x6e\x25\x03\x0c\x66\x72\x61\x6d\x65\x2d\x65\x64"
  "\x67\x65\x31\x26\x03\x0c\x76\x65\x63\x74\x6f\x72\x2d\x79\x63\x6f"
  "\x72\x27\x03\x0e\x73\x65\x67\x6d\x65\x6e\x74\x2d\x73\x74\x61\x72"
  "\x74\x04\x0b\x76\x65\x63\x74\x6f\x72\x2d\x61\x64\x64\x28\x03\x0c"
  "\x76\x65\x63\x74\x6f\x72\x2d\x78\x63\x6f\x72\x29\x04\x0d\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x63\x61\x6c\x65\x04\x14\x64\x72\x61\x77"
  "\x2d\x6c\x69\x6e\x65\x2d\x6f\x6e\x2d\x73\x63\x72\x65\x65\x6e\x2a"
  "\x0c\x5d\x22\x81\x8d\x02\x5c\x20\x81\x89\x02\x5b\x1e\x81\x87\x02"
  "\x5a\x1c\x81\x8b\x02\x59\x1a\x81\x8b\x02\x58\x18\x81\x89\x02\x57"
  "\x16\x81\x85\x02\x56\x14\x81\x87\x02\x55\x12\x81\x85\x02\x54\x10"
  "\x81\x89\x02\x53\x0e\x81\x87\x02\x52\x0c\x81\x85\x02\x51\x0a\x81"
  "\x85\x02\x50\x08\x81\x85\x02\x4f\x06\x81\x85\x02\x4e\x04\x83\x04"
  "\x21\x3b\x2b\x02\x0f\x10\x14\x12\x13\x11\x09\x02\x03\x15\x03\x16"
  "\x03\x29\x03\x27\x03\x04\x61\x62\x73\x2c\x03\x0d\x72\x6f\x75\x6e"
  "\x64\x2d\x3e\x65\x78\x61\x63\x74\x2d\x06\x12\x70\x6c\x6f\x74\x2d"
  "\x69\x66\x2d\x6f\x6e\x2d\x73\x63\x72\x65\x65\x6e\x2e\x08\x81\x01"
  "\x4a\x81\xa9\x02\x80\x01\x48\x81\xa9\x02\x7f\x46\x81\xa9\x02\x7e"
  "\x44\x81\xa9\x02\x7d\x42\x81\xa5\x02\x7c\x40\x81\xa3\x02\x7b\x3e"
  "\x81\xa5\x02\x7a\x3c\x81\xa3\x02\x79\x3a\x81\xa3\x02\x78\x38\x81"
  "\xa3\x02\x77\x36\x81\xa3\x02\x76\x34\x81\xa5\x02\x75\x32\x81\xa1"
  "\x02\x74\x30\x81\x9f\x02\x73\x2e\x81\x9b\x02\x72\x2c\x81\x9d\x02"
  "\x71\x2a\x81\x9b\x02\x70\x28\x81\x99\x02\x6f\x26\x81\x97\x02\x6e"
  "\x24\x81\x9d\x02\x6d\x22\x81\x97\x02\x6c\x20\x81\x95\x02\x6b\x1e"
  "\x81\x99\x02\x6a\x1c\x81\x93\x02\x69\x1a\x81\x91\x02\x68\x18\x81"
  "\x8f\x02\x67\x16\x81\x8d\x02\x66\x14\x81\x8b\x02\x65\x12\x81\x8d"
  "\x02\x64\x10\x81\x89\x02\x63\x0e\x81\x8f\x02\x62\x0c\x81\x8b\x02"
  "\x61\x0a\x81\x87\x02\x60\x08\x81\x89\x02\x5f\x06\x81\x85\x02\x5e"
  "\x04\x84\x06\x49\x66\x2f\x02\x08\x0c\x02\x03\x05\x22\x02\x85\x01"
  "\x0a\x81\x89\x02\x84\x01\x08\x81\x89\x02\x83\x01\x06\x81\x89\x02"
  "\x82\x01\x04\x86\x0a\x09\x14\x30\x02\x09\x0c\x0d\x0e\x0f\x03\x31"
  "\x2e\x10\x11\x12\x13\x14\x2d\x41\x72\x67\x75\x6d\x65\x6e\x74\x20"
  "\x6e\x6f\x74\x20\x61\x20\x70\x72\x6f\x63\x65\x64\x75\x72\x65\x2d"
  "\x2d\x50\x52\x4f\x43\x45\x44\x55\x52\x45\x2d\x3e\x50\x41\x49\x4e"
  "\x54\x45\x52\x09\x03\x03\x0b\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x3f\x04\x06\x65\x72\x72\x6f\x72\x31\x03\x16\x03\x17\x05\x18\x03"
  "\x19\x03\x11\x66\x72\x61\x6d\x65\x2d\x6d\x61\x70\x2d\x79\x2d\x73"
  "\x74\x65\x70\x32\x03\x11\x66\x72\x61\x6d\x65\x2d\x6d\x61\x70\x2d"
  "\x78\x2d\x73\x74\x65\x70\x33\x03\x1c\x03\x1a\x03\x1b\x03\x12\x66"
  "\x72\x61\x6d\x65\x2d\x6d\x61\x70\x2d\x69\x6e\x76\x2d\x6d\x61\x70"
  "\x34\x04\x1d\x04\x1e\x04\x1f\x0a\x18\x66\x69\x6c\x6c\x2d\x72\x6f"
  "\x77\x2d\x66\x72\x6f\x6d\x2d\x70\x72\x6f\x63\x65\x64\x75\x72\x65"
  "\x35\x11\xa6\x01\x44\x81\x91\x02\xa5\x01\x42\x81\x91\x02\xa4\x01"
  "\x40\x81\x93\x02\xa3\x01\x3e\x81\x99\x02\xa2\x01\x3c\x81\x9b\x02"
  "\xa1\x01\x3a\x81\x97\x02\xa0\x01\x38\x81\x9b\x02\x9f\x01\x36\x81"
  "\x99\x02\x9e\x01\x34\x81\x99\x02\x9d\x01\x32\x81\x95\x02\x9c\x01"
  "\x30\x81\x93\x02\x9b\x01\x2e\x81\x95\x02\x9a\x01\x2c\x81\x93\x02"
  "\x99\x01\x2a\x81\x93\x02\x98\x01\x28\x81\x91\x02\x97\x01\x26\x81"
  "\x93\x02\x96\x01\x24\x81\x91\x02\x95\x01\x22\x81\x8f\x02\x94\x01"
  "\x20\x81\x8d\x02\x93\x01\x1e\x81\x8b\x02\x92\x01\x1c\x81\x89\x02"
  "\x91\x01\x1a\x81\x87\x02\x90\x01\x18\x81\x87\x02\x8f\x01\x16\x81"
  "\x87\x02\x8e\x01\x14\x81\x85\x02\x8d\x01\x12\x81\x85\x02\x8c\x01"
  "\x10\x81\x89\x02\x8b\x01\x0e\x81\x85\x02\x8a\x01\x0c\x81\x87\x02"
  "\x89\x01\x0a\x81\x83\x02\x88\x01\x08\x81\x83\x02\x87\x01\x06\x81"
  "\x83\x02\x86\x01\x04\x83\x04\x43\x76\x36\x02\x0a\x0b\x66\x6c\x6f"
  "\x6e\x75\x6d\x2d\x61\x64\x64\x37\x0f\x03\x15\x03\x29\x04\x03\x27"
  "\x05\x22\x06\xb4\x01\x1e\x81\x9b\x02\xb3\x01\x1c\x81\x99\x02\xb2"
  "\x01\x1a\x81\x97\x02\xb1\x01\x18\x81\x97\x02\xb0\x01\x16\x81\x97"
  "\x02\xaf\x01\x14\x81\x97\x02\xae\x01\x12\x81\x97\x02\xad\x01\x10"
  "\x81\x95\x02\xac\x01\x0e\x81\x93\x02\xab\x01\x0c\x81\x99\x02\xaa"
  "\x01\x0a\x81\x95\x02\xa9\x01\x08\x81\x93\x02\xa8\x01\x06\x81\x91"
  "\x02\xa7\x01\x04\x8a\x12\x1d\x2d\x38\x02\x0b\x0c\x0d\x0e\x0f\x11"
  "\x10\x14\x29\x41\x72\x67\x75\x6d\x65\x6e\x74\x20\x6e\x6f\x74\x20"
  "\x61\x20\x70\x69\x63\x74\x75\x72\x65\x2d\x2d\x50\x49\x43\x54\x55"
  "\x52\x45\x2d\x3e\x50\x41\x49\x4e\x54\x45\x52\x12\x13\x09\x70\x69"
  "\x63\x74\x75\x72\x65\x3f\x09\x03\x03\x16\x04\x31\x03\x0f\x70\x69"
  "\x63\x74\x75\x72\x65\x2d\x68\x65\x69\x67\x68\x74\x03\x0e\x70\x69"
  "\x63\x74\x75\x72\x65\x2d\x77\x69\x64\x74\x68\x03\x15\x03\x17\x05"
  "\x18\x03\x19\x03\x34\x03\x32\x03\x33\x03\x1c\x03\x1a\x03\x1b\x04"
  "\x1d\x04\x1e\x04\x1f\x0e\x16\x66\x69\x6c\x6c\x2d\x72\x6f\x77\x2d"
  "\x66\x72\x6f\x6d\x2d\x70\x69\x63\x74\x75\x72\x65\x31\x13\xdf\x01"
  "\x58\x81\x8b\x02\xde\x01\x56\x81\x8b\x02\xdd\x01\x54\x81\x8d\x02"
  "\xdc\x01\x52\x81\x9f\x02\xdb\x01\x50\x81\xa1\x02\xda\x01\x4e\x81"
  "\x9d\x02\xd9\x01\x4c\x81\xa1\x02\xd8\x01\x4a\x81\x9f\x02\xd7\x01"
  "\x48\x81\x9f\x02\xd6\x01\x46\x81\x9b\x02\xd5\x01\x44\x81\x99\x02"
  "\xd4\x01\x42\x81\x9b\x02\xd3\x01\x40\x81\x99\x02\xd2\x01\x3e\x81"
  "\x99\x02\xd1\x01\x3c\x81\x97\x02\xd0\x01\x3a\x81\x99\x02\xcf\x01"
  "\x38\x81\x97\x02\xce\x01\x36\x81\x97\x02\xcd\x01\x34\x81\x95\x02"
  "\xcc\x01\x32\x81\x93\x02\xcb\x01\x30\x81\x91\x02\xca\x01\x2e\x81"
  "\x8f\x02\xc9\x01\x2c\x81\x8d\x02\xc8\x01\x2a\x81\x8b\x02\xc7\x01"
  "\x28\x81\x89\x02\xc6\x01\x26\x81\x87\x02\xc5\x01\x24\x81\x87\x02"
  "\xc4\x01\x22\x81\x87\x02\xc3\x01\x20\x81\x87\x02\xc2\x01\x1e\x81"
  "\x85\x02\xc1\x01\x1c\x81\x85\x02\xc0\x01\x1a\x81\x8b\x02\xbf\x01"
  "\x18\x81\x89\x02\xbe\x01\x16\x81\x89\x02\xbd\x01\x14\x81\x87\x02"
  "\xbc\x01\x12\x81\x89\x02\xbb\x01\x10\x81\x85\x02\xba\x01\x0e\x81"
  "\x87\x02\xb9\x01\x0c\x81\x83\x02\xb8\x01\x0a\x81\x87\x02\xb7\x01"
  "\x08\x81\x83\x02\xb6\x01\x06\x81\x83\x02\xb5\x01\x04\x83\x04\x57"
  "\x8e\x01\x14\x02\x0c\x0c\x37\x0f\x0f\x63\x65\x69\x6c\x69\x6e\x67"
  "\x2d\x3e\x65\x78\x61\x63\x74\x37\x0d\x66\x6c\x6f\x6f\x72\x2d\x3e"
  "\x65\x78\x61\x63\x74\x11\x03\x03\x15\x03\x29\x04\x03\x27\x08\x11"
  "\x70\x6f\x69\x6e\x74\x2d\x69\x6e\x2d\x70\x69\x63\x74\x75\x72\x65"
  "\x0f\x03\x2d\x05\x22\x04\x14\x66\x6c\x6f\x61\x74\x69\x6e\x67\x2d"
  "\x76\x65\x63\x74\x6f\x72\x2d\x72\x65\x66\x0e\x09\x98\x02\x74\x81"
  "\xab\x02\x97\x02\x72\x81\xa9\x02\x96\x02\x70\x81\xa7\x02\x95\x02"
  "\x6e\x81\xa7\x02\x94\x02\x6c\x81\xa5\x02\x93\x02\x6a\x81\xa5\x02"
  "\x92\x02\x68\x81\xa5\x02\x91\x02\x66\x81\xa5\x02\x90\x02\x64\x81"
  "\xa3\x02\x8f\x02\x62\x81\xa1\x02\x8e\x02\x60\x81\x9f\x02\x8d\x02"
  "\x5e\x81\x9f\x02\x8c\x02\x5c\x81\x9f\x02\x8b\x02\x5a\x81\xbb\x02"
  "\x8a\x02\x58\x81\xa5\x02\x89\x02\x56\x81\x9f\x02\x88\x02\x54\x81"
  "\xb9\x02\x87\x02\x52\x81\xaf\x02\x86\x02\x50\x81\xaf\x02\x85\x02"
  "\x4e\x81\xaf\x02\x84\x02\x4c\x81\xaf\x02\x83\x02\x4a\x81\xaf\x02"
  "\x82\x02\x48\x81\xaf\x02\x81\x02\x46\x81\xaf\x02\x80\x02\x44\x81"
  "\xbb\x02\xff\x01\x42\x81\xaf\x02\xfe\x01\x40\x81\xb9\x02\xfd\x01"
  "\x3e\x81\xaf\x02\xfc\x01\x3c\x81\xaf\x02\xfb\x01\x3a\x81\xaf\x02"
  "\xfa\x01\x38\x81\xaf\x02\xf9\x01\x36\x81\xaf\x02\xf8\x01\x34\x81"
  "\xaf\x02\xf7\x01\x32\x81\xad\x02\xf6\x01\x30\x81\xad\x02\xf5\x01"
  "\x2e\x81\xad\x02\xf4\x01\x2c\x81\xab\x02\xf3\x01\x2a\x81\xab\x02"
  "\xf2\x01\x28\x81\xab\x02\xf1\x01\x26\x81\xa9\x02\xf0\x01\x24\x81"
  "\xa9\x02\xef\x01\x22\x81\xa9\x02\xee\x01\x20\x81\xa7\x02\xed\x01"
  "\x1e\x81\xa7\x02\xec\x01\x1c\x81\xa7\x02\xeb\x01\x1a\x81\xa5\x02"
  "\xea\x01\x18\x81\xa3\x02\xe9\x01\x16\x81\xa7\x02\xe8\x01\x14\x81"
  "\xa3\x02\xe7\x01\x12\x81\xa1\x02\xe6\x01\x10\x81\x9f\x02\xe5\x01"
  "\x0e\x81\x9d\x02\xe4\x01\x0c\x81\xa1\x02\xe3\x01\x0a\x81\x9d\x02"
  "\xe2\x01\x08\x81\x9b\x02\xe1\x01\x06\x81\x99\x02\xe0\x01\x04\x8e"
  "\x1a\x73\x8d\x01\x0c\x02\x0d\x99\x02\x04\x88\x0e\x03\x39\x02\x0e"
  "\x03\x6f\x6b\x06\x61\x70\x70\x6c\x79\x3a\x0b\x64\x65\x67\x65\x6e"
  "\x65\x72\x61\x74\x65\x3b\x06\x2e\x30\x30\x30\x31\x27\x1e\x1f\x05"
  "\x03\x25\x03\x26\x03\x24\x03\x29\x03\x27\x03\x2c\x04\x0b\x76\x65"
  "\x63\x74\x6f\x72\x2d\x73\x75\x62\x04\x28\x04\x03\x17\x70\x6f\x69"
  "\x6e\x74\x73\x2d\x3e\x73\x65\x67\x6d\x65\x6e\x74\x2d\x63\x68\x65"
  "\x63\x6b\x73\x28\x04\x04\x6d\x61\x70\x3c\x04\x1f\x03\x11\x04\x1e"
  "\x03\x37\x10\xd4\x02\x78\x81\xa9\x02\xd3\x02\x76\x81\xa9\x02\xd2"
  "\x02\x74\x81\xa7\x02\xd1\x02\x72\x81\xa5\x02\xd0\x02\x70\x81\xa7"
  "\x02\xcf\x02\x6e\x81\xa5\x02\xce\x02\x6c\x81\xad\x02\xcd\x02\x6a"
  "\x81\xa3\x02\xcc\x02\x68\x81\xab\x02\xcb\x02\x66\x81\xa1\x02\xca"
  "\x02\x64\x81\xa5\x02\xc9\x02\x62\x81\x9f\x02\xc8\x02\x60\x81\xa3"
  "\x02\xc7\x02\x5e\x81\x9f\x02\xc6\x02\x5c\x81\x89\x02\xc5\x02\x5a"
  "\x81\x8b\x02\xc4\x02\x58\x81\x89\x02\xc3\x02\x56\x81\x89\x02\xc2"
  "\x02\x54\x81\x8b\x02\xc1\x02\x52\x81\x89\x02\xc0\x02\x50\x81\x89"
  "\x02\xbf\x02\x4e\x81\xa3\x02\xbe\x02\x4c\x81\xa1\x02\xbd\x02\x4a"
  "\x81\x9f\x02\xbc\x02\x48\x81\x87\x02\xbb\x02\x46\x81\xa3\x02\xba"
  "\x02\x44\x81\xa1\x02\xb9\x02\x42\x81\xa1\x02\xb8\x02\x40\x81\x9f"
  "\x02\xb7\x02\x3e\x81\x85\x02\xb6\x02\x3c\x81\xa1\x02\xb5\x02\x3a"
  "\x81\x9f\x02\xb4\x02\x38\x81\x9d\x02\xb3\x02\x36\x81\x85\x02\xb2"
  "\x02\x34\x81\x99\x02\xb1\x02\x32\x81\x97\x02\xb0\x02\x30\x81\x9b"
  "\x02\xaf\x02\x2e\x81\x95\x02\xae\x02\x2c\x81\x99\x02\xad\x02\x2a"
  "\x81\x93\x02\xac\x02\x28\x81\x93\x02\xab\x02\x26\x81\x93\x02\xaa"
  "\x02\x24\x81\x95\x02\xa9\x02\x22\x81\x93\x02\xa8\x02\x20\x81\x91"
  "\x02\xa7\x02\x1e\x81\x93\x02\xa6\x02\x1c\x81\x91\x02\xa5\x02\x1a"
  "\x81\x8f\x02\xa4\x02\x18\x81\x93\x02\xa3\x02\x16\x81\x91\x02\xa2"
  "\x02\x14\x81\x8d\x02\xa1\x02\x12\x81\x91\x02\xa0\x02\x10\x81\x8f"
  "\x02\x9f\x02\x0e\x81\x8b\x02\x9e\x02\x0c\x81\x8f\x02\x9d\x02\x0a"
  "\x81\x8d\x02\x9c\x02\x08\x81\x89\x02\x9b\x02\x06\x81\x87\x02\x9a"
  "\x02\x04\x85\x08\x77\xa4\x01\x37\x02\x0f\x3b\x0d\xd6\x02\x06\x81"
  "\x83\x02\xd5\x02\x04\x83\x04\x05\x0b\x3b\x02\x10\x04\x09\x6c\x69"
  "\x73\x74\x2d\x72\x65\x66\x11\x02\xd7\x02\x04\x83\x04\x03\x0a\x0d"
  "\x02\x11\x04\x11\x02\xd8\x02\x04\x83\x04\x03\x0a\x3d\x02\x12\x04"
  "\x11\x02\xd9\x02\x04\x83\x04\x03\x0a\x3e\x02\x13\x04\x11\x02\xda"
  "\x02\x04\x83\x04\x03\x0a\x3f\x02\x14\x04\x11\x02\xdb\x02\x04\x83"
  "\x04\x03\x0a\x40\x02\x15\x04\x11\x02\xdc\x02\x04\x83\x04\x03\x0a"
  "\x41\x02\x16\x04\x11\x04\x13\x6d\x61\x6b\x65\x2d\x73\x65\x67\x6d"
  "\x65\x6e\x74\x2d\x63\x68\x65\x63\x6b\x42\x03\xe5\x02\x14\x81\x91"
  "\x02\xe4\x02\x12\x81\x8f\x02\xe3\x02\x10\x81\x8d\x02\xe2\x02\x0e"
  "\x81\x8b\x02\xe1\x02\x0c\x81\x89\x02\xe0\x02\x0a\x81\x87\x02\xdf"
  "\x02\x08\x81\x85\x02\xde\x02\x06\x81\x83\x02\xdd\x02\x04\x83\x04"
  "\x13\x20\x43\x02\x17\x06\x2e\x30\x30\x30\x31\x03\x27\x03\x29\x03"
  "\x2c\x04\xf3\x02\x1e\x81\x91\x02\xf2\x02\x1c\x81\x93\x02\xf1\x02"
  "\x1a\x81\x93\x02\xf0\x02\x18\x81\x8f\x02\xef\x02\x16\x81\x8d\x02"
  "\xee\x02\x14\x81\x8b\x02\xed\x02\x12\x81\x89\x02\xec\x02\x10\x81"
  "\x87\x02\xeb\x02\x0e\x81\x85\x02\xea\x02\x0c\x81\x85\x02\xe9\x02"
  "\x0a\x81\x85\x02\xe8\x02\x08\x81\x87\x02\xe7\x02\x06\x81\x85\x02"
  "\xe6\x02\x04\x84\x06\x1d\x29\x2c\x02\x18\x04\x11\x02\xf4\x02\x04"
  "\x83\x04\x03\x0a\x44\x02\x19\x04\x11\x02\xf5\x02\x04\x83\x04\x03"
  "\x0a\x45\x02\x1a\x04\x11\x02\xf6\x02\x04\x83\x04\x03\x0a\x46\x02"
  "\x1b\x04\x11\x02\xf7\x02\x04\x83\x04\x03\x0a\x47\x02\x1c\x04\x11"
  "\x02\xf8\x02\x04\x83\x04\x03\x0a\x11\x02\x1d\x3a\x07\x61\x70\x70"
  "\x65\x6e\x64\x1e\x1f\x04\x03\x15\x04\x3c\x04\x17\x72\x6f\x77\x2d"
  "\x69\x6e\x74\x65\x72\x73\x65\x63\x74\x73\x2d\x73\x65\x67\x6d\x65"
  "\x6e\x74\x3c\x04\x82\x03\x16\x81\x85\x02\x81\x03\x14\x81\x89\x02"
  "\x80\x03\x12\x81\x83\x02\xff\x02\x10\x81\x87\x02\xfe\x02\x0e\x81"
  "\x83\x02\xfd\x02\x0c\x81\x85\x02\xfc\x02\x0a\x81\x87\x02\xfb\x02"
  "\x08\x81\x87\x02\xfa\x02\x06\x81\x85\x02\xf9\x02\x04\x84\x06\x15"
  "\x25\x3a\x02\x1e\x03\x11\x73\x65\x67\x6d\x65\x6e\x74\x2d\x63\x68"
  "\x65\x63\x6b\x2d\x78\x73\x1f\x03\x11\x73\x65\x67\x6d\x65\x6e\x74"
  "\x2d\x63\x68\x65\x63\x6b\x2d\x79\x73\x1e\x03\x11\x73\x65\x67\x6d"
  "\x65\x6e\x74\x2d\x63\x68\x65\x63\x6b\x2d\x78\x65\x48\x03\x11\x73"
  "\x65\x67\x6d\x65\x6e\x74\x2d\x63\x68\x65\x63\x6b\x2d\x79\x65\x49"
  "\x03\x14\x73\x65\x67\x6d\x65\x6e\x74\x2d\x63\x68\x65\x63\x6b\x2d"
  "\x64\x78\x2f\x64\x79\x4a\x03\x2d\x05\x03\x3c\x3d\x08\x92\x03\x22"
  "\x81\x91\x02\x91\x03\x20\x81\x8f\x02\x90\x03\x1e\x81\x8f\x02\x8f"
  "\x03\x1c\x81\x91\x02\x8e\x03\x1a\x81\x8f\x02\x8d\x03\x18\x81\x8f"
  "\x02\x8c\x03\x16\x81\x91\x02\x8b\x03\x14\x81\x91\x02\x8a\x03\x12"
  "\x81\x91\x02\x89\x03\x10\x81\x8f\x02\x88\x03\x0e\x81\x8d\x02\x87"
  "\x03\x0c\x81\x8b\x02\x86\x03\x0a\x81\x89\x02\x85\x03\x08\x81\x87"
  "\x02\x84\x03\x06\x81\x85\x02\x83\x03\x04\x84\x06\x21\x34\x2d\x02"
  "\x1f\x03\x26\x03\x25\x03\x12\x6d\x61\x6b\x65\x2d\x69\x6e\x65\x78"
  "\x61\x63\x74\x2d\x76\x65\x63\x74\x26\x03\x24\x05\x06\x99\x03\x10"
  "\x81\x89\x02\x98\x03\x0e\x81\x87\x02\x97\x03\x0c\x81\x87\x02\x96"
  "\x03\x0a\x81\x85\x02\x95\x03\x08\x81\x85\x02\x94\x03\x06\x81\x83"
  "\x02\x93\x03\x04\x83\x04\x0f\x1d\x25\x02\x20\x03\x29\x03\x27\x03"
  "\x15\x04\x05\x9e\x03\x0c\x81\x87\x02\x9d\x03\x0a\x81\x85\x02\x9c"
  "\x03\x08\x81\x85\x02\x9b\x03\x06\x81\x83\x02\x9a\x03\x04\x83\x04"
  "\x0b\x17\x29\x20\x27\x27\x09\x29\x04\x25\x04\x2d\x04\x3a\x04\x11"
  "\x04\x47\x04\x46\x04\x45\x04\x44\x04\x2c\x04\x43\x04\x41\x04\x40"
  "\x04\x3f\x04\x3e\x04\x3d\x04\x0d\x04\x3b\x04\x37\x04\x39\x04\x0c"
  "\x04\x14\x04\x38\x04\x36\x04\x30\x04\x2f\x04\x2b\x04\x23\x04\x21"
  "\x04\x0b\x04\x04\x20\x26\x17\x3c\x1d\x4a\x49\x1e\x48\x1f\x42\x28"
  "\x34\x1c\x1a\x1b\x32\x33\x19\x18\x0f\x31\x11\x70\x69\x63\x74\x75"
  "\x72\x65\x2d\x3e\x70\x61\x69\x6e\x74\x65\x72\x35\x13\x70\x72\x6f"
  "\x63\x65\x64\x75\x72\x65\x2d\x3e\x70\x61\x69\x6e\x74\x65\x72\x2e"
  "\x2a\x12\x73\x65\x67\x6d\x65\x6e\x74\x73\x2d\x3e\x70\x61\x69\x6e"
  "\x74\x65\x72\x20\x10\x6e\x75\x6d\x62\x65\x72\x2d\x3e\x70\x61\x69"
  "\x6e\x74\x65\x72\x18\x73\x65\x74\x2d\x70\x61\x69\x6e\x74\x65\x72"
  "\x2d\x72\x65\x73\x6f\x6c\x75\x74\x69\x6f\x6e\x21\x0d\x73\x63\x72"
  "\x65\x65\x6e\x2d\x66\x72\x61\x6d\x65\x20\x05\x32\x35\x35\x2e\x81"
  "\x01\x81\x01\x10\x11\x6c\x6f\x63\x61\x6c\x2d\x61\x73\x73\x69\x67"
  "\x6e\x6d\x65\x6e\x74\x22\x12\x13\x0e\x05\x10\x64\x65\x66\x69\x6e"
  "\x65\x2d\x6d\x75\x6c\x74\x69\x70\x6c\x65\x02\x03\x03\x16\x05\x0a"
  "\x03\x14\x2a\x80\x80\x04\x13\x28\x81\x81\x02\x12\x26\x81\x81\x02"
  "\x11\x24\x81\x85\x02\x10\x22\x81\x83\x02\x0f\x20\x81\x8b\x02\x0e"
  "\x1e\x81\x89\x02\x0d\x1c\x81\x83\x02\x0c\x1a\x81\x85\x02\x0b\x18"
  "\x81\x85\x02\x0a\x16\x81\x83\x02\x09\x14\x81\x85\x02\x08\x12\x81"
  "\x85\x02\x07\x10\x81\x83\x02\x06\x0e\x81\x89\x02\x05\x0c\x81\x85"
  "\x02\x04\x0a\x81\x83\x02\x03\x08\x81\x89\x02\x02\x06\x81\x85\x02"
  "\x01\x04\x81\x83\x02\x29\x46";

SCHEME_OBJECT *
prmpnt_so_data_fc7bf435de40338a (entry_count_t dispatch_base)
{
  SCHEME_OBJECT ccb;
  SCHEME_OBJECT * current_block;
  DECLARE_VARIABLES_FOR_DATA ();

  ccb = (unstackify (((unsigned char *) (& (prog_prmpnt_so_data_fc7bf435de40338a [0]))), (sizeof (prog_prmpnt_so_data_fc7bf435de40338a)), dispatch_base));
  current_block = (OBJECT_ADDRESS (ccb));
  return (& (current_block [LABEL_26]));
}

DECLARE_COMPILED_DATA_NS ("prmpnt.so", prmpnt_so_data_fc7bf435de40338a)

#endif /* !WANT_ONLY_CODE */

DECLARE_DYNAMIC_INITIALIZATION ("prmpnt.so", "5d5ae37fbe151759")
