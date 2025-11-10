import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
from io import StringIO
from pathlib import Path

# Données sous forme de texte brut
data = """Formation	Mode de formation	Note
EN	EE	3.5
EAI	PT	3.1
EN	EE	3.6
EN	PT	3.4
EN	EE	2.6
EN	PT	4
EN	PT	3.2
EN	EE	3
EN	EE	2.9
EN	TP	3.8
EN	EE	5.7
EN	TP	4.2
EEM	PT	3.9
EAI	PT	4.4
EEM	PT	3.6
EN	PT	3.5
EN	PT	5.7
EN	EE	4.4
EN	PT	4.2
EN	PT	3.5
EN	PT	4.2
EN	TP	4.1
EN	PT	4
EN	PT	3.4
"""

# Lecture dans un DataFrame pandas
df = pd.read_csv(StringIO(data), sep="\t")
output_dir = Path(__file__).resolve().parent

# --- 1️⃣ Violin plot : EE vs PT ---
plt.figure(figsize=(6, 5))
sns.violinplot(
    data=df[df["Mode de formation"].isin(["EE", "PT"])],
    x="Mode de formation",
    y="Note",
    palette="pastel",
)
plt.title("Répartition des notes selon le mode de formation (EE vs PT)")
plt.tight_layout()
plt.savefig(output_dir / "violin_mode_formation.png", dpi=300)
plt.close()

# --- 2️⃣ Violin plot : EEM/EAI vs EN ---
df_formation = df.copy()
df_formation["Groupe"] = df_formation["Formation"].apply(lambda x: "EEM/EAI" if x in ["EEM", "EAI"] else "EN")
plt.figure(figsize=(6, 5))
sns.violinplot(data=df_formation, x="Groupe", y="Note", palette="muted")
plt.title("Répartition des notes : EEM/EAI vs EN")
plt.tight_layout()
plt.savefig(output_dir / "violin_formation_groupes.png", dpi=300)
plt.close()

# --- 3️⃣ Histogramme de toute la classe ---
plt.figure(figsize=(7, 5))
sns.histplot(df["Note"], bins=10, kde=True, color="skyblue")
plt.title("Distribution des notes de la classe entière")
plt.xlabel("Note")
plt.ylabel("Effectif")
plt.tight_layout()
plt.savefig(output_dir / "histogramme_notes.png", dpi=300)
plt.close()
