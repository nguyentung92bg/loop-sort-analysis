/* IL2CPP: HomeSceneFxRunner$$Create
HomeSceneFxRunner_o* HomeSceneFxRunner__Create (HomeSceneFx_o* fx, UnityEngine_RectTransform_o* parent, int32_t index, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: HomeSceneFxRunner$$Create
   HomeSceneFxRunner_o* HomeSceneFxRunner__Create (HomeSceneFx_o* fx, UnityEngine_RectTransform_o*
   parent, int32_t index, const MethodInfo* method); */

undefined8 HomeSceneFxRunner__Create_2420258(long param_1,undefined8 param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined8 uVar5;
  
  if ((bRam0000000004f4b77b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2ff8);
    FUN_021f03f8(PTR_DAT_049c3000);
    FUN_021f03f8(PTR_DAT_049c3008);
    FUN_021f03f8(PTR_DAT_049c3010);
    FUN_021f03f8(PTR_DAT_049c3018);
    FUN_021f03f8(PTR_DAT_049c3020);
    FUN_021f03f8(PTR_DAT_049c3028);
    FUN_021f03f8(PTR_DAT_049c3030);
    FUN_021f03f8(PTR_DAT_049c3038);
    FUN_021f03f8(PTR_DAT_049c3040);
    FUN_021f03f8(PTR_DAT_049c3048);
    FUN_021f03f8(PTR_DAT_049c3050);
    FUN_021f03f8(PTR_DAT_049c3058);
    FUN_021f03f8(PTR_DAT_049bde28);
    FUN_021f03f8(PTR_DAT_049c3060);
    FUN_021f03f8(PTR_DAT_049c3068);
    FUN_021f03f8(PTR_DAT_049c3070);
    FUN_021f03f8(PTR_DAT_049c3078);
    FUN_021f03f8(PTR_DAT_049c3080);
    FUN_021f03f8(PTR_DAT_049c3088);
    FUN_021f03f8(PTR_DAT_049c3090);
    FUN_021f03f8(PTR_DAT_049c3098);
    FUN_021f03f8(PTR_DAT_049c30a0);
    FUN_021f03f8(PTR_DAT_049c30a8);
    FUN_021f03f8(PTR_DAT_049c30b0);
    FUN_021f03f8(PTR_DAT_049c30b8);
    FUN_021f03f8(PTR_DAT_049c30c0);
    FUN_021f03f8(PTR_DAT_049c30c8);
    FUN_021f03f8(PTR_DAT_049be850);
    FUN_021f03f8(PTR_DAT_049c30d0);
    FUN_021f03f8(PTR_DAT_049c30d8);
    FUN_021f03f8(PTR_DAT_049c30e0);
    FUN_021f03f8(PTR_DAT_049c30e8);
    FUN_021f03f8(PTR_DAT_049c30f0);
    FUN_021f03f8(PTR_DAT_049c30f8);
    bRam0000000004f4b77b = 1;
  }
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_021f06a0();
  }
  iVar1 = *(int *)(param_1 + 0x18);
  if (iVar1 == 0) {
    iVar1 = param_3 + 1;
  }
  uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049bde28);
  System_Random___ctor_3110968(uVar3,iVar1,0);
  uVar5 = *(undefined8 *)(param_1 + 0x10);
  uVar2 = _PrivateImplementationDetails___ComputeStringHash_24a0fd0(uVar5,0);
  if (uVar2 < 0x651e0f18) {
    if (uVar2 < 0x15a40f5e) {
      if (uVar2 < 0xe0aa0f4) {
        if (uVar2 == 0x21e0ae1) {
          uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30e0,0);
                    /* try { // try from 0252085c to 02620867 has its CatchHandler @ 025209dc */
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          if (*(char *)(param_1 + 0x88) != '\0') {
                    /* try { // try from 02520878 to 0262089f has its CatchHandler @ 02520a40 */
            uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3048);
            HomeSceneVeil___ctor_24325a8(uVar3,param_1,param_2,0);
            return uVar3;
          }
        }
        else if (uVar2 == 0xe0aa0f3) {
          uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c3098,0);
          if ((uVar4 & 1) == 0) {
            return 0;
          }
          uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3078);
          HomeSceneFxRunner_Steam___ctor_2421c10(uVar5,param_1,param_2,uVar3);
          return uVar5;
        }
      }
      else if (uVar2 == 0x122417f4) {
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30d8,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x88) != '\0') {
          uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3038);
                    /* try { // try from 025209b4 to 026209b7 has its CatchHandler @ 02520a30 */
                    /* try { // try from 025209b8 to 026209bb has its CatchHandler @ 025206e8 */
          HomeSceneShimmer___ctor_242ea2c(uVar3,param_1,param_2,0);
          return uVar3;
                    /* try { // try from 025209bc to 026209bf has its CatchHandler @ 025209e0 */
        }
      }
      else if (uVar2 == 0x15a40f5d) {
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30a0,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3000);
        HomeSceneFxRunner_Clock___ctor_2422090(uVar3,param_1,param_2);
        return uVar3;
      }
    }
    else if (uVar2 < 0x3a43c562) {
      if (uVar2 == 0x17db1627) {
                    /* try { // try from 025208ec to 026208f7 has its CatchHandler @ 025209d4 */
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049be850,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3050);
        HomeSceneFxRunner_Line___ctor_2421e7c(uVar3,param_1,param_2);
        return uVar3;
                    /* try { // try from 02520918 to 0262091f has its CatchHandler @ 02520a34 */
      }
      if (uVar2 == 0x3a43c561) {
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30e8,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3008);
        HomeSceneFxRunner_CloudShadow___ctor_24214b4(uVar3,param_1,param_2);
        return uVar3;
      }
    }
    else {
      if (uVar2 == 0x622b0026) {
                    /* try { // try from 02520a2c to 02620a63 has its CatchHandler @ 025206e8 */
                    /* catch() { ... } // from try @ 025207dc with catch @ 02520a30
                       catch() { ... } // from try @ 025209b4 with catch @ 02520a30 */
                    /* catch() { ... } // from try @ 02520918 with catch @ 02520a34
                       catch() { ... } // from try @ 025209c8 with catch @ 02520a34 */
                    /* catch() { ... } // from try @ 02520878 with catch @ 02520a40 */
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c3080,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3070);
                    /* try { // try from 02520a64 to 02620a67 has its CatchHandler @ 02520a6c */
        HomeSceneFxRunner_Stars___ctor_2421260(uVar3,param_1,param_2);
        return uVar3;
                    /* catch() { ... } // from try @ 02520a64 with catch @ 02520a6c */
      }
      if (uVar2 == 0x651e0f17) {
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30b8,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x88) != '\0') {
          uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3030);
          HomeSceneRipple___ctor_242f188(uVar3,param_1,param_2,0);
          return uVar3;
        }
      }
    }
  }
  else if (uVar2 < 0x89a3b5d4) {
    if (uVar2 < 0x7c3946c9) {
      if (uVar2 == 0x6a3827bc) {
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30c0,0);
                    /* try { // try from 025208b0 to 026208b7 has its CatchHandler @ 025209d8 */
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3018);
        HomeSceneFxRunner_Glow___ctor_2420b04(uVar3,param_1,param_2);
        return uVar3;
                    /* try { // try from 025208d4 to 026208df has its CatchHandler @ 025209ec */
      }
      if (uVar2 == 0x7c3946c8) {
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30d0,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3068);
        HomeSceneFxRunner_Rings___ctor_24215d8(uVar5,param_1,param_2,uVar3);
        return uVar5;
      }
    }
    else if (uVar2 == 0x848317f2) {
                    /* try { // try from 025209c0 to 026209c3 has its CatchHandler @ 025209e8 */
                    /* try { // try from 025209c4 to 026209c7 has its CatchHandler @ 025209ec */
                    /* try { // try from 025209c8 to 026209d3 has its CatchHandler @ 02520a34 */
                    /* catch() { ... } // from try @ 025208ec with catch @ 025209d4
                       try { // try from 025209d4 to 02620a0b has its CatchHandler @ 025206e8 */
      uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30a8,0);
                    /* catch() { ... } // from try @ 025208b0 with catch @ 025209d8 */
                    /* catch() { ... } // from try @ 0252085c with catch @ 025209dc */
      if ((uVar4 & 1) == 0) {
        return 0;
      }
                    /* catch() { ... } // from try @ 025209bc with catch @ 025209e0 */
                    /* catch() { ... } // from try @ 025207f8 with catch @ 025209e4 */
      if (*(char *)(param_1 + 0x88) != '\0') {
                    /* catch() { ... } // from try @ 02520828 with catch @ 025209e8
                       catch() { ... } // from try @ 025209c0 with catch @ 025209e8 */
                    /* catch() { ... } // from try @ 025208d4 with catch @ 025209ec
                       catch() { ... } // from try @ 025209c4 with catch @ 025209ec */
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3040);
                    /* try { // try from 02520a0c to 02620a0f has its CatchHandler @ 02520a1c */
        HomeSceneSnow___ctor_243163c(uVar5,param_1,param_2,uVar3,0);
        return uVar5;
      }
    }
    else {
                    /* try { // try from 025206e8 to 026207db has its CatchHandler @ 025206e8
                       catch() { ... } // from try @ 025206e8 with catch @ 025206e8
                       catch() { ... } // from try @ 02520920 with catch @ 025206e8
                       catch() { ... } // from try @ 025209b8 with catch @ 025206e8
                       catch() { ... } // from try @ 025209d4 with catch @ 025206e8
                       catch() { ... } // from try @ 02520a2c with catch @ 025206e8
                       catch() { ... } // from try @ 02520a78 with catch @ 025206e8 */
      if (uVar2 == 0x89a3b5d3) {
        uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30c8,0);
        if ((uVar4 & 1) == 0) {
          return 0;
        }
        if (*(char *)(param_1 + 0x88) != '\0') {
          uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3028);
          HomeSceneRain___ctor_2430574(uVar5,param_1,param_2,uVar3,0);
          return uVar5;
        }
      }
    }
  }
  else if (uVar2 < 0xa47b3de5) {
    if (uVar2 == 0xa1f3723f) {
                    /* try { // try from 02520920 to 026209b3 has its CatchHandler @ 025206e8 */
      uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c3088,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if (*(char *)(param_1 + 0x88) != '\0') {
        uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3020);
        HomeSceneFog___ctor_242f6b0(uVar5,param_1,param_2,uVar3,0);
        return uVar5;
      }
    }
    else if (uVar2 == 0xa47b3de4) {
      uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c3090,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3060);
      HomeSceneFxRunner_Rays___ctor_2420c04(uVar3,param_1,param_2);
      return uVar3;
    }
  }
  else {
    if (uVar2 == 0xaf85ad29) {
      uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30f8,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3010);
      HomeSceneFxRunner_Flash___ctor_2420f74(uVar5,param_1,param_2,uVar3);
      return uVar5;
    }
    if (uVar2 == 0xc3e301e3) {
                    /* try { // try from 02520a70 to 02620a77 has its CatchHandler @ 02520a80 */
                    /* try { // try from 02520a78 to 02620a83 has its CatchHandler @ 025206e8 */
                    /* catch() { ... } // from try @ 02520a24 with catch @ 02520a80
                       catch() { ... } // from try @ 02520a70 with catch @ 02520a80 */
      uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30b0,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      uVar5 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c3058);
      HomeSceneFxRunner_Motes___ctor_2421854(uVar5,param_1,param_2,uVar3);
      return uVar5;
    }
                    /* try { // try from 025207dc to 026207e7 has its CatchHandler @ 02520a30 */
    if (uVar2 == 0xd6ac2b33) {
                    /* try { // try from 025207f8 to 0262081b has its CatchHandler @ 025209e4 */
      uVar4 = System_String__op_Equality_2f7b7fc(uVar5,*(undefined8 *)PTR_DAT_049c30f0,0);
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      if ((0.0 < *(float *)(param_1 + 0xa8)) && (0.0 < *(float *)(param_1 + 0xac))) {
                    /* try { // try from 02520828 to 0262084b has its CatchHandler @ 025209e8 */
        uVar3 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049c2ff8);
        HomeSceneFxRunner_Cabins___ctor_242238c(uVar3,param_1,param_2);
        return uVar3;
      }
    }
  }
                    /* catch() { ... } // from try @ 02520a0c with catch @ 02520a1c */
                    /* try { // try from 02520a24 to 02620a2b has its CatchHandler @ 02520a80 */
  return 0;
}

