/* IL2CPP: CloudPrefsBool$$ToString
System_String_o* CloudPrefsBool__ToString (CloudPrefsBool_o __this, const MethodInfo* method);
Native pseudo-C; inferred types require review. */


/* IL2CPP: CloudPrefsBool$$ToString
   System_String_o* CloudPrefsBool__ToString (CloudPrefsBool_o __this, const MethodInfo* method); */

void CloudPrefsBool__ToString_24eb74c(void)

{
  byte abStack_4 [4];
  
  abStack_4[0] = 0;
  abStack_4[0] = CloudPrefsBool__get_Value_24eb0d0();
  abStack_4[0] = abStack_4[0] & 1;
  if (*(int *)(*(long *)(PTR_DAT_049b3bd0 + 0x28) + 0xe4) == 0) {
    FUN_021f0574();
  }
  System_Boolean__ToString_306efc8(abStack_4,0);
  return;
}

