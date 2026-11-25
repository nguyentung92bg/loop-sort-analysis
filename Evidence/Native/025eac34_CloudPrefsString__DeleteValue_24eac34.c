/* IL2CPP: CloudPrefsString$$DeleteValue
void CloudPrefsString__DeleteValue (CloudPrefsString_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsString$$DeleteValue
   void CloudPrefsString__DeleteValue (CloudPrefsString_o __this, const MethodInfo* method); */

void CloudPrefsString__DeleteValue_24eac34(undefined8 *param_1)

{
  undefined *puVar1;
  undefined8 uStack_30;
  undefined8 uStack_28;
  
  puVar1 = PTR_DAT_049c5120;
  if ((bRam0000000004f4bcc5 & 1) == 0) {
    FUN_021f03f8(PTR_DAT_049c5120);
                    /* try { // try from 025eac64 to 026eac6b has its CatchHandler @ 025eb068 */
    bRam0000000004f4bcc5 = 1;
  }
  uStack_28 = param_1[1];
  uStack_30 = *param_1;
  if (*(int *)(*(long *)puVar1 + 0xe4) == 0) {
    FUN_021f0574();
  }
  PlayerPrefsString__DeleteValue_3f0e418(&uStack_30,0);
  return;
}

