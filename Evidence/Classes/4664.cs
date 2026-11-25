// Namespace: 
public interface ICloudPrefsStore // TypeDefIndex: 4664
{
	// Methods

	// RVA: -1 Offset: -1 Slot: 0
	public abstract bool HasKey(string key);

	// RVA: -1 Offset: -1 Slot: 1
	public abstract void Remove(string key);

	// RVA: -1 Offset: -1 Slot: 2
	public abstract string GetString(string key);

	// RVA: -1 Offset: -1 Slot: 3
	public abstract void SetString(string key, string value);

	// RVA: -1 Offset: -1 Slot: 4
	public abstract int GetInt(string key);

	// RVA: -1 Offset: -1 Slot: 5
	public abstract void SetInt(string key, int value);

	// RVA: -1 Offset: -1 Slot: 6
	public abstract double GetDouble(string key);

	// RVA: -1 Offset: -1 Slot: 7
	public abstract void SetDouble(string key, double value);

	// RVA: -1 Offset: -1 Slot: 8
	public abstract bool GetBool(string key);

	// RVA: -1 Offset: -1 Slot: 9
	public abstract void SetBool(string key, bool value);
}

