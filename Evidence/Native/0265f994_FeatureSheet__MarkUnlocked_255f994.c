/* IL2CPP: FeatureSheet$$MarkUnlocked
void FeatureSheet__MarkUnlocked (FeatureSheet_o* __this, int32_t type, int32_t level, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: FeatureSheet$$MarkUnlocked
   void FeatureSheet__MarkUnlocked (FeatureSheet_o* __this, int32_t type, int32_t level, const
   MethodInfo* method); */

void FeatureSheet__MarkUnlocked_255f994(undefined8 param_1,int param_2,undefined4 param_3)

{
  undefined *puVar1;
  long lVar2;
  int iStack_34;
  
  puVar1 = PTR_DAT_049cb8d0;
  if ((bRam0000000004f4c10b & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049cb8d0);
    bRam0000000004f4c10b = 1;
  }
  iStack_34 = 0x17;
  if (1 < param_2 - 5U) {
    iStack_34 = param_2;
  }
  lVar2 = Cathei_BakingSheet_Sheet___Il2CppFullySharedGenericType__object___Find_29867f0
                    (param_1,&iStack_34,*(undefined8 *)puVar1);
  if ((lVar2 != 0) && (*(int *)(lVar2 + 0x1c) == 0)) {
    *(undefined4 *)(lVar2 + 0x1c) = param_3;
  }
  return;
}

