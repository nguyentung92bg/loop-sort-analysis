/* IL2CPP: AreasMonitor.<>c__DisplayClass66_0$$<PlayProgress>b__0
void AreasMonitor___c__DisplayClass66_0___PlayProgress_b__0 (AreasMonitor___c__DisplayClass66_0_o* __this, float level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: AreasMonitor.<>c__DisplayClass66_0$$<PlayProgress>b__0
   void AreasMonitor___c__DisplayClass66_0___PlayProgress_b__0
   (AreasMonitor___c__DisplayClass66_0_o* __this, float level, const MethodInfo* method); */

void AreasMonitor___c__DisplayClass66_0___PlayProgress_b__0_2437ecc(undefined4 param_1,long param_2)

{
  undefined *puVar1;
  long lVar2;
  undefined8 uStack_38;
  undefined4 uStack_24;
  
  puVar1 = PTR_DAT_049b62e0;
  if ((bRam0000000004f4b80a & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049b62e0);
    bRam0000000004f4b80a = 1;
  }
  lVar2 = *(long *)(param_2 + 0x10);
  uStack_38 = 0;
  uStack_24 = param_1;
  System_Nullable___Il2CppFullySharedGenericStructType____ctor_2903c04
            (&uStack_38,&uStack_24,*(undefined8 *)puVar1);
  if (lVar2 != 0) {
    *(undefined8 *)(lVar2 + 0x118) = uStack_38;
    if (*(long *)(param_2 + 0x10) != 0) {
      AreasMonitor__RenderElements_2434c48(*(long *)(param_2 + 0x10),1);
      if (*(long *)(param_2 + 0x10) != 0) {
        AreasMonitor__FollowFill_2437b6c(param_1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_021f06a0();
}

