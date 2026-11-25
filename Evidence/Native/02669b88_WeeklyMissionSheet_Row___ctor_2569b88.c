/* IL2CPP: WeeklyMissionSheet.Row$$.ctor
void WeeklyMissionSheet_Row___ctor (WeeklyMissionSheet_Row_o* __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: WeeklyMissionSheet.Row$$.ctor
   void WeeklyMissionSheet_Row___ctor (WeeklyMissionSheet_Row_o* __this, const MethodInfo* method);
    */

undefined1  [16] WeeklyMissionSheet_Row___ctor_2569b88(ulong param_1)

{
  undefined *puVar1;
  undefined8 uVar2;
  long lVar3;
  long lVar4;
  undefined1 auVar5 [16];
  
  puVar1 = PTR_DAT_049cbdc8;
  if ((bRam0000000004f4c187 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cbdc8);
    bRam0000000004f4c187 = 1;
  }
  lVar3 = *(long *)puVar1;
  lVar4 = *(long *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 8);
  if ((*(ushort *)(lVar4 + 0x135) & 1) == 0) {
    lVar4 = FUN_02229718(lVar4);
  }
  uVar2 = thunk_FUN_0222ca34(lVar4);
  Cathei_BakingSheet_VerticalList___Il2CppFullySharedGenericType____ctor_2a432b4
            (uVar2,*(undefined8 *)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0xa8));
  FUN_0200ffd0(param_1,*(undefined8 *)(**(long **)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x80),uVar2);
  auVar5._8_8_ = 0;
  auVar5._0_8_ = param_1;
  return auVar5;
}

