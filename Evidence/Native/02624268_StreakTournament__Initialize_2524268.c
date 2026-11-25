/* IL2CPP: StreakTournament$$Initialize
void StreakTournament__Initialize (StreakTournament_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: StreakTournament$$Initialize
   void StreakTournament__Initialize (StreakTournament_o* __this, const MethodInfo* method); */

void StreakTournament__Initialize_2524268(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined4 uVar5;
  undefined8 uVar6;
  long lVar7;
  ulong uVar8;
  long *plVar9;
  undefined8 uVar10;
  ulong uVar11;
  long lVar12;
  
  puVar3 = PTR_DAT_049c9908;
  puVar2 = PTR_DAT_049c2c18;
  puVar1 = PTR_DAT_049c2c08;
  if ((bRam0000000004f4be8e & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c2c20);
    FUN_021f03f8(PTR_DAT_049c9250);
    FUN_021f03f8(PTR_DAT_049c4278);
    FUN_021f03f8(PTR_DAT_049c2c08);
    FUN_021f03f8(PTR_DAT_049c2c30);
    FUN_021f03f8(PTR_DAT_049c2c18);
    FUN_021f03f8(PTR_DAT_049c4280);
    FUN_021f03f8(PTR_DAT_049c9258);
    FUN_021f03f8(PTR_DAT_049c9910);
    FUN_021f03f8(PTR_DAT_049c9908);
    FUN_021f03f8(PTR_DAT_049c9918);
    FUN_021f03f8(PTR_DAT_049c9920);
    FUN_021f03f8(PTR_DAT_049c2c58);
    FUN_021f03f8(PTR_DAT_049c2c60);
    FUN_021f03f8(PTR_DAT_049c42d0);
    FUN_021f03f8(PTR_DAT_049c9270);
                    /* try { // try from 02624364 to 0272436b has its CatchHandler @ 02624438 */
    bRam0000000004f4be8e = 1;
  }
  uVar10 = *(undefined8 *)(param_1 + 0x10);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 02624384 to 027243cf has its CatchHandler @ 0262443c */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar3,0);
  lVar12 = *(long *)puVar2;
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9910;
  puVar3 = PTR_DAT_049c2c60;
  puVar2 = PTR_DAT_049c2c30;
  puVar1 = PTR_DAT_049c2c20;
                    /* try { // try from 026243d0 to 027243e3 has its CatchHandler @ 026241f8 */
  lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                    /* try { // try from 026243e4 to 027243fb has its CatchHandler @ 02624434 */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
                    /* try { // try from 026243fc to 02724427 has its CatchHandler @ 026241f8 */
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar6,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar3);
  uVar10 = *(undefined8 *)(param_1 + 0x18);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar1);
                    /* try { // try from 02624428 to 0272442b has its CatchHandler @ 02624430 */
                    /* try { // try from 0262442c to 02724457 has its CatchHandler @ 026241f8 */
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar4,0);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02624428 with catch @ 02624430
                        */
  lVar12 = *(long *)puVar2;
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 026243e4 with catch @ 02624434
                        */
  lVar7 = *(long *)(lVar12 + 0x38);
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02624364 with catch @ 02624438
                        */
  if (lVar7 == 0) {
                    /* catch(type#1 @ 0460ebd8) { ... } // from try @ 02624384 with catch @ 0262443c
                        */
    FUN_02229774(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
                    /* try { // try from 02624458 to 0272445b has its CatchHandler @ 02624474 */
    lVar7 = FUN_02229718();
  }
                    /* try { // try from 0262445c to 02724477 has its CatchHandler @ 026241f8 */
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9918;
  puVar3 = PTR_DAT_049c4280;
  puVar2 = PTR_DAT_049c4278;
  puVar1 = PTR_DAT_049c2c58;
                    /* catch() { ... } // from try @ 02624458 with catch @ 02624474 */
                    /* try { // try from 02624478 to 0272447f has its CatchHandler @ 02624488 */
  lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
                    /* try { // try from 02624480 to 0272448b has its CatchHandler @ 026241f8 */
                    /* catch(type#2 @ 00000000) { ... } // from try @ 02624478 with catch @ 02624488
                        */
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar6,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar1);
  uVar10 = *(undefined8 *)(param_1 + 0x20);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar4 = PTR_DAT_049c9920;
  puVar3 = PTR_DAT_049c9258;
  puVar2 = PTR_DAT_049c9250;
  puVar1 = PTR_DAT_049c42d0;
  lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar6,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar1);
  uVar10 = *(undefined8 *)(param_1 + 0x28);
  uVar6 = thunk_FUN_0222ca34(*(undefined8 *)puVar2);
  System_Action___Il2CppFullySharedGenericType____ctor_27aed38
            (uVar6,param_1,*(undefined8 *)puVar4,0);
  lVar12 = *(long *)puVar3;
  lVar7 = *(long *)(lVar12 + 0x38);
  if (lVar7 == 0) {
    FUN_02229774(lVar12);
    lVar7 = *(long *)(lVar12 + 0x38);
  }
  lVar7 = *(long *)(lVar7 + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  if (*(int *)(lVar7 + 0xe4) == 0) {
    FUN_021f0574();
  }
  puVar1 = PTR_DAT_049c9270;
  lVar7 = *(long *)(*(long *)(lVar12 + 0x38) + 0x10);
  if ((*(ushort *)(lVar7 + 0x135) & 1) == 0) {
    lVar7 = FUN_02229718();
  }
  MessagePipe_SubscriberExtensions__Subscribe___Il2CppFullySharedGenericType__26d6654
            (uVar10,uVar6,**(undefined8 **)(lVar7 + 0xb8),*(undefined8 *)puVar1);
  if ((bRam0000000004f4be8f & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5b18);
    FUN_021f03f8(PTR_DAT_049c9928);
    FUN_021f03f8(PTR_DAT_049be138);
    FUN_021f03f8(PTR_DAT_049be160);
    FUN_021f03f8(PTR_DAT_049be168);
    FUN_021f03f8(PTR_DAT_049c9518);
    bRam0000000004f4be8f = 1;
  }
  if (*(long *)(param_1 + 0x68) != 0) {
    uVar6 = RemoteConfigModule__GetDataClassNew_object__26a494c
                      (*(long *)(param_1 + 0x68),*(undefined8 *)PTR_DAT_049c9518);
    *(undefined8 *)(param_1 + 0x88) = uVar6;
    thunk_FUN_021f190c((undefined8 *)(param_1 + 0x88),uVar6);
    if ((*(long *)(param_1 + 0x38) != 0) &&
       (lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x110), lVar7 != 0)) {
      uVar5 = ConstantSheetBase_object___GetInt_281c070(lVar7,0x1e,*(undefined8 *)PTR_DAT_049c5b18);
      plVar9 = (long *)(param_1 + 0x78);
      *(undefined4 *)(param_1 + 0x80) = uVar5;
      if (*plVar9 != 0) {
        return;
      }
      if ((*(long *)(param_1 + 0x38) != 0) &&
         (lVar7 = *(long *)(*(long *)(param_1 + 0x38) + 0x110), lVar7 != 0)) {
        lVar7 = ConstantSheetBase_object___GetString_281c118
                          (lVar7,0x1f,*(undefined8 *)PTR_DAT_049c9928);
        lVar12 = thunk_FUN_0222ca34(*(undefined8 *)PTR_DAT_049be168);
        System_Collections_Generic_List___Il2CppFullySharedGenericType____ctor_28cd10c
                  (lVar12,*(undefined8 *)PTR_DAT_049be160);
        *plVar9 = lVar12;
        thunk_FUN_021f190c(plVar9,lVar12);
        if ((lVar7 != 0) &&
           (lVar7 = System_String__Split_2f802dc(lVar7,0x2c,0,0), puVar1 = PTR_DAT_049be138,
           lVar7 != 0)) {
          if ((int)*(ulong *)(lVar7 + 0x18) < 1) {
            return;
          }
          uVar11 = 0;
          uVar8 = *(ulong *)(lVar7 + 0x18) & 0xffffffff;
          do {
            if (uVar8 <= uVar11) {
                    /* WARNING: Subroutine does not return */
              FUN_021f06a8();
            }
            uVar8 = System_Int32__TryParse_30fc1b4
                              (*(undefined8 *)(lVar7 + 0x20 + uVar11 * 8),&stack0xffffffffffffffc8,0
                              );
            if ((uVar8 & 1) != 0) {
              if (*plVar9 == 0) break;
              FUN_02333498(*plVar9,&stack0xffffffffffffffcc,*(undefined8 *)puVar1);
            }
            uVar8 = (ulong)*(uint *)(lVar7 + 0x18);
            uVar11 = uVar11 + 1;
            if ((long)(int)*(uint *)(lVar7 + 0x18) <= (long)uVar11) {
              return;
            }
          } while( true );
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

